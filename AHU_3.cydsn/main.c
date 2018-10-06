/* ========================================
 *
 * Copyright Park View Care Center, 2018
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF PVCC.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>
#include <stdlib.h>
#include "build_defs.h"
#include "one_wire.h"
#include "ds18b20.h"
#include "max31855.h"

#define MY_ID 'C'

char rcv_buffer[24];
char myId;
uint8_t rcv_pos;    // where in the receive buffer are we?
uint8_t esc;        // flag to indicate whether an escape character was received
uint32 Global_time; // constantly updated by the timer interrupt, used for exact delays
uint32 esc_time;    // used to help indicate how long an escape character is valid, compared to Global_time
char version[12];   // just used to hold to version date sent at boot time

CY_ISR(Timer_ISR){  // interrupt routine to update the Global_time value
    Global_time++;
    Timer_Int_ClearPending();
}
CY_ISR(Rx_ISR){     //ISR for 'On Byte Recd.'
	uint16 GetB;    //16bit var for storing GetByte's return.
	RS485_ReadRxStatus();   //Read it to clear interrupts.
	GetB=RS485_GetByte();   //MSB has RxStatus Reg,and LSB has the data.
    if((GetB & 0xff)==0x1b){    // did an escape character get received?
			esc=1;              // set the flag
			rcv_pos=0;          // prepare for the next character
			esc_time = Global_time; // record when the escape was received
		}
    else if (esc)   // had an escape character already been received?
    {
        rcv_buffer[rcv_pos++] = (GetB & 0xff);  // put the character in the buffer
        if (rcv_pos > 3)
            rcv_pos = 0;
    }
}

int main(void)
{
    uint8_t i;
    char s[40];
    char ac;
    char ac2;
    double f1, f2;
    uint32 PSI;
    float fPSI;
    float temperature;
    ds18b20_devices devices;
    one_wire_device address;

    myId = MY_ID;     // each device responds to the id character sent after the escape character on the RS485 bus
    rcv_pos = 0;
    Global_time = 0;
    sprintf(version,"%02d%02d%02d-%02d%02d", BUILD_YEAR - 2000, BUILD_MONTH, BUILD_DAY, BUILD_HOUR, BUILD_MIN);

    CYGlobalIntDisable;//Disable interrupts to avoid triggering during setup.
    Timer_Start();
    Timer_Int_Start();
    Timer_Int_SetVector(Timer_ISR);
    
    RS485_Start();              // all communications are done using RS485
    Rx_Int_Start();             //Start the Interrupt.
    Rx_Int_SetVector(Rx_ISR);   //Set the Vector to the ISR.

    PSI_Start();                // activate to ADC component
    AMux_Start();               // activate the mux between the two analog lines and the ADC

    CyGlobalIntEnable; /* Enable global interrupts. */
    Temp_CS_Write(0x0f);    // turn all CS lines off
    Temp_CLK_Write(1);      // set the clock high

    // run a conversion just to clear the ADC
    PSI_SetOffset(40000);       // not 100% sure it's needed or usefull...
    AMux_Select(0);
    CyDelay(5);
    PSI = PSI_Read32();
    fPSI = PSI_CountsTo_mVolts(PSI);
    CyDelay(100);
    AMux_Select(1);
    CyDelay(5);
    PSI = PSI_Read32();
    fPSI = PSI_CountsTo_mVolts(PSI);

    // pause before announcing to the world, so that each device has a chance to tell about itself
    CyDelay(4250);
    sprintf(s,"%c:Running:%s:\r\n",myId,version);   // display our ID and what version of the program this is
    RS485_PutString(s);

    for(;;)     // this program loops forever
    {
        // check to see if both the escape character and the requested id is in the receive buffer
        if (esc && rcv_pos)
        {   // going into this routine means we got an escape character, and at least one other character
            esc = 0;                    //reset the escape flag
            rcv_buffer[rcv_pos] = 0;    //terminate the input
            rcv_pos = 0;
            if (rcv_buffer[0] == myId)  // only answer our own id
            {
                CyDelay(50);
                rcv_buffer[0] = 0;
                LED_Write(1);           // light the led just to show we received a request for this id, for debugging
                one_wire_reset_pulse(); // do this for all of the DS18B20's

                // do this here because of timing, the DS18B20's can convert while other devices report
                devices = ds18b20_get_devices(1);
                ds18b20_convert_temperature_all();
                
                AMux_Select(0);
                PSI_StartConvert();
                CyDelay(5);
                if (PSI_IsEndConversion(PSI_WAIT_FOR_RESULT))
                    ;
                PSI = PSI_GetResult32();
                PSI_StopConvert();
                PSI -= 200;
                fPSI = (PSI_CountsTo_mVolts(PSI) / 9) * .1450377377 -3.19; 
                if (fPSI < 0.1)
                    fPSI = 0.0;
                sprintf(s,"%c:P:%05.2lf:%06d:\r\n",myId,fPSI,PSI_CountsTo_mVolts(PSI));
                RS485_PutString(s);
                CyDelay(150);

                AMux_Select(1); // select the other analog line
                PSI_SetOffset(0);
                CyDelay(50);
                
                AMux_Select(1); // select the other analog line
                PSI_StartConvert();
                CyDelay(5);
                if (PSI_IsEndConversion(PSI_WAIT_FOR_RESULT))
                    ;
                PSI = PSI_GetResult32();
                PSI_StopConvert();
                fPSI = (PSI_CountsTo_Volts(PSI) - 2.75)  * .1450377377; 
                sprintf(s,"%c:A:%06.4lf:%06d:\r\n",myId,fPSI,PSI_CountsTo_mVolts(PSI));
                RS485_PutString(s);
                CyDelay(150);

                ac = 'a';                   // default to the a/c not running
                ac2 = 'a';
                if (!AC_Read())             // read the GPIOs to see if they are brought low by an external RIB
                    ac = 'A';
                if (!AC2_Read())
                    ac2 = 'A';
                sprintf(s,"%c:B:%c%c:            \r\n",myId,ac,ac2);    // report on the status of the air conditioners
                RS485_PutString(s);

                for (i = 0; i < 6; i++)     // get the temperatures from up to 6 devices
                {
                    if ((read_max31855(i) & 0x05) == 0x00)  // is there a thermocouple attached?
                    {
                        f1 = max31855_Farenheit(i);
                        f2 = max31855_Internal(i);
                        sprintf(s,"%c:%d:%06.2lf:%06.2lf:\r\n",myId,i,f1,f2);
                        RS485_PutString(s);
                        CyDelay(250);
                    }
                }

                CyDelay(150);
                for (i = 0; i < devices.size; ++i) // get the temperatures from all of the DS18B20s that responded
                {
                    temperature = ds18b20_read_temperature(devices.devices[i]) * 1.8 + 32;

                    address = devices.devices[i];
                    sprintf(s,"%c:T:%02x%02x%02x%02x%02x%02x%02x%02x:%06.2lf:\r\n",
                        myId,address.address[0],address.address[1],address.address[2],
                        address.address[3],address.address[4],address.address[5],
                        address.address[6],address.address[7],temperature);
                    RS485_PutString(s);
                    CyDelay(50);
                }

                sprintf(s,"%c:DONE:           \r\n",myId);
                RS485_PutString(s);
                CyDelay(50);
            }
        }
        if (esc && (Global_time - esc_time > 2000))  // give it 2 seconds for a character to follow the escape
		{
			esc = 0;  // reset the esc flag, since it should have been followed by the id within 2 seconds
			rcv_pos = 0;
		}
    }
}

/* [] END OF FILE */

/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include <stdio.h>
/*************************************************** 
  This is a library for the Adafruit PT100/P1000 RTD Sensor w/MAX31865

  Designed specifically to work with the Adafruit RTD Sensor
  ----> https://www.adafruit.com/products/3328

  This sensor uses SPI to communicate, 4 pins are required to  
  interface
  Adafruit invests time and resources providing this open source code, 
  please support Adafruit and open-source hardware by purchasing 
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.  
  BSD license, all text above must be included in any redistribution
 ****************************************************/

#ifndef ADAFRUIT_MAX31865_H
#define ADAFRUIT_MAX31865_H

#define MAX31856_CONFIG_REG            0x00
#define MAX31856_CONFIG_BIAS           0x80
#define MAX31856_CONFIG_MODEAUTO       0x40
#define MAX31856_CONFIG_MODEOFF        0x00
#define MAX31856_CONFIG_1SHOT          0x20
#define MAX31856_CONFIG_3WIRE          0x10
#define MAX31856_CONFIG_24WIRE         0x00
#define MAX31856_CONFIG_FAULTSTAT      0x02
#define MAX31856_CONFIG_FILT50HZ       0x01
#define MAX31856_CONFIG_FILT60HZ       0x00

#define MAX31856_RTDMSB_REG           0x01
#define MAX31856_RTDLSB_REG           0x02
#define MAX31856_HFAULTMSB_REG        0x03
#define MAX31856_HFAULTLSB_REG        0x04
#define MAX31856_LFAULTMSB_REG        0x05
#define MAX31856_LFAULTLSB_REG        0x06
#define MAX31856_FAULTSTAT_REG        0x07


#define MAX31865_FAULT_HIGHTHRESH     0x80
#define MAX31865_FAULT_LOWTHRESH      0x40
#define MAX31865_FAULT_REFINLOW       0x20
#define MAX31865_FAULT_REFINHIGH      0x10
#define MAX31865_FAULT_RTDINLOW       0x08
#define MAX31865_FAULT_OVUV           0x04


#define RTD_A 3.9083e-3
#define RTD_B -5.775e-7
// The value of the Rref resistor. Use 430.0 for PT100 and 4300.0 for PT1000
#define RREF      430.0
// The 'nominal' 0-degrees-C resistance of the sensor
// 100.0 for PT100, 1000.0 for PT1000
#define RNOMINAL  100.0




typedef enum max31865_numwires { 
  MAX31865_2WIRE = 0,
  MAX31865_3WIRE = 1,
  MAX31865_4WIRE = 0
} max31865_numwires_t;

    uint8_t max31865_begin(max31865_numwires_t wires);
    uint8_t max31865_readFault(uint8_t cs);
    void max31865_clearFault(uint8_t cs);
    uint16_t max31865_readRTD(uint8_t cs);
    void max31865_setWires(max31865_numwires_t wires, uint8_t cs);
    void max31865_autoConvert(uint8_t b, uint8_t cs);
    void max31865_enableBias(uint8_t b, uint8_t cs);
    float max31865_temperature(float RTDnominal, float refResistor, uint8_t cs);
    void max31865_readRegisterN(uint8_t addr, uint8_t buffer[], uint8_t n, uint8_t cs);
    uint8_t  max31865_readRegister8(uint8_t addr, uint8_t cs);
    uint16_t max31865_readRegister16(uint8_t addr, uint8_t cs);
    void     max31865_writeRegister8(uint8_t addr, uint8_t reg, uint8_t cs);
    uint8_t MAX31865_spixfer(uint8_t x);

#endif

/* [] END OF FILE */

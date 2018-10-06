#include "project.h"
#include <stdio.h>
#include "max31865.h"
#include <math.h>
// A lot of this code is based on what Adafruit published for Ardnuino.  That code was object oriented,
// and mostly for 8-bit MCUs.  PSoC Creator doesn't do object oriented, and this is a 32-bit MCU.

// note that all of the MAX31865 SPI communications is done with software SPI.  For some reason the hardware
// SPI had difficulties consistently talking with the MAX31865 on the PSOC 5LPs.  There are just a couple of
// functions at the end to handle this communications.

// throughout this program the cs variable is the "chip select", used to bring the gpio line low for the chip
// to talk with.  All other gpio select lines should be high for the other MAX31865s.

uint8_t max31865_begin(max31865_numwires_t wires) {
    uint8_t cs, t;
    for (cs = 0; cs < 8; cs++)
    {
        t = 0;
        if (wires == MAX31865_3WIRE)
            t |= MAX31856_CONFIG_3WIRE;
        t |= MAX31856_CONFIG_FAULTSTAT;
        max31865_writeRegister8(MAX31856_CONFIG_REG, t, cs);
    }
    return 1;
}


uint8_t max31865_readFault(uint8_t cs) {
    uint8_t ret;
    max31865_readRegisterN(MAX31856_CONFIG_REG, &ret, 1, cs);
    if (!(ret * 0x10) || (ret & 0x01))
        return 1;
    max31865_readRegisterN(MAX31856_FAULTSTAT_REG, &ret, 1, cs);
    return ret;
}

void max31865_clearFault(uint8_t cs) {
    uint8_t t;
    max31865_readRegisterN(MAX31856_CONFIG_REG, &t, 1, cs);
    t &= ~0x2C;
    t |= MAX31856_CONFIG_FAULTSTAT;
    max31865_writeRegister8(MAX31856_CONFIG_REG, t, cs);
}

void max31865_enableBias(uint8_t b, uint8_t cs) {
    uint8_t t;
    max31865_readRegisterN(MAX31856_CONFIG_REG, &t, 1, cs);
    if (b) {
        t |= MAX31856_CONFIG_BIAS;       // enable bias
    } else {
        t &= ~MAX31856_CONFIG_BIAS;       // disable bias
    }
    max31865_writeRegister8(MAX31856_CONFIG_REG, t, cs);
}

void max31865_autoConvert(uint8_t b, uint8_t cs) {
    uint8_t t;
    max31865_readRegisterN(MAX31856_CONFIG_REG, &t, 1, cs);
    if (b) {
        t |= MAX31856_CONFIG_MODEAUTO;       // enable autoconvert
    } else {
        t &= ~MAX31856_CONFIG_MODEAUTO;       // disable autoconvert
    }
    max31865_writeRegister8(MAX31856_CONFIG_REG, t, cs);
}

void max31865_setWires(max31865_numwires_t wires , uint8_t cs) {
    uint8_t t;
    max31865_readRegisterN(MAX31856_CONFIG_REG, &t, 1, cs);
    if (wires == MAX31865_3WIRE) {
        t |= MAX31856_CONFIG_3WIRE;
    } else {
    // 2 or 4 wire
        t &= ~MAX31856_CONFIG_3WIRE;
    }
    max31865_writeRegister8(MAX31856_CONFIG_REG, t, cs);
}

float  max31865_temperature(float RTDnominal, float refResistor, uint8_t cs) {
    // http://www.analog.com/media/en/technical-documentation/application-notes/AN709_0.pdf

    float Z1, Z2, Z3, Z4, Rt, temp;

    Rt = max31865_readRTD(cs);
    Rt /= 32768;
    Rt *= refResistor;
    Z1 = -RTD_A;
    Z2 = RTD_A * RTD_A - (4 * RTD_B);
    Z3 = (4 * RTD_B) / RTDnominal;
    Z4 = 2 * RTD_B;

    temp = Z2 + (Z3 * Rt);
    temp = (sqrtf(temp) + Z1) / Z4;
    if (temp > 120) return 0;  // should not have a temp over 120 degrees celsius
    if (temp >= 0) return temp;

    // ugh.  From here on down in this procedure doesn't really seem to work, but all temps read are above 0
    // so it's not exactly a worry
    Rt /= RTDnominal;
    Rt *= 100;      // normalize to 100 ohm

    float rpoly = Rt;

    temp = -242.02;
    temp += 2.2228 * rpoly;
    rpoly *= Rt;  // square
    temp += 2.5859e-3 * rpoly;
    rpoly *= Rt;  // ^3
    temp -= 4.8260e-6 * rpoly;
    rpoly *= Rt;  // ^4
    temp -= 2.8183e-8 * rpoly;
    rpoly *= Rt;  // ^5
    temp += 1.5243e-10 * rpoly;
    if (temp < -20)
        return -20;
    return temp;
}

uint16_t max31865_readRTD (uint8_t cs) {
    uint16_t rtd;
    uint8_t t;
    max31865_clearFault(cs);
    max31865_enableBias(1, cs);
    CyDelay(15);
    max31865_readRegisterN(MAX31856_CONFIG_REG, &t, 1, cs);
    t |= MAX31856_CONFIG_1SHOT;
    max31865_writeRegister8(MAX31856_CONFIG_REG, t, cs);
    CyDelay(70);

    //rtd = max31865_readRegister16(MAX31856_RTDMSB_REG, cs);
    max31865_readRegisterN(MAX31856_RTDMSB_REG, &t, 1, cs);
    rtd = t <<8;
    max31865_readRegisterN(MAX31856_RTDLSB_REG, &t, 1, cs);
    rtd |= t;

    // remove fault
    rtd >>= 1;

    return rtd;
}

/**********************************************/

uint8_t max31865_readRegister8(uint8_t addr, uint8_t cs) {
  uint8_t ret = 0;
  max31865_readRegisterN(addr, &ret, 1, cs);
  return ret;
}

uint16_t max31865_readRegister16(uint8_t addr, uint8_t cs) {
  uint8_t buffer[2] = {0, 0};
  max31865_readRegisterN(addr, buffer, 2, cs);

  uint16_t ret = buffer[0];
  ret <<= 8;
  ret |=  buffer[1];

  return ret;
}


void max31865_readRegisterN(uint8_t addr, uint8_t buffer[], uint8_t n, uint8_t cs) {
    addr &= 0x7F; // make sure top bit is not set

    MAX31865_CS_Write(~(1<<cs));
    CyDelay(1);
    MAX31865_spixfer(addr);
    while (n--) {
        *buffer = MAX31865_spixfer(0x7f);
        buffer++;
    }
    CyDelay(1);
    MAX31865_CS_Write(0xff);
}


void max31865_writeRegister8(uint8_t addr, uint8_t data, uint8_t cs) {
    MAX31865_CS_Write(~(1<<cs));
    CyDelay(1);
    MAX31865_spixfer(addr | 0x80);   // make sure top bit is set
    MAX31865_spixfer(data);
    MAX31865_CS_Write(0xff);
}

// this is the software SPI function that handles all of the communications with the MAX31865s
// watch all of the timings.  A 50 microsecond delay seems to be working.
// The pin names are mosi, miso, and sclk.  They are arbitrary, and can be almost any pins
// on the PSoC 5LP.  They are not part of the hardware SPI, since this is all software driven.
uint8_t MAX31865_spixfer(uint8_t x) {

    // software spi
    uint8_t reply = 0;

    mosi_Write(0);      // set the master-out-slave-in pin low to begin with
    CyDelayUs(50);
    for (int i=7; i>=0; i--) {
        reply <<= 1;
        sclk_Write(1);      // sclk is the name of the clocking pin
        CyDelayUs(50);
        if (x & (1<<i))
        {
            mosi_Write(1);  // mosi is the name of the pin for writing from the MCU
        }
        else
        {
            mosi_Write(0);
        }
        CyDelayUs(50);
        sclk_Write(0);
        CyDelayUs(50);
        if (miso_Read())    // miso is the name given the pin for reading from the MAX31865s
        {
            reply |= 1;
        }
    }
    CyDelayUs(50);
    mosi_Write(0);
    return reply;
}

/* [] END OF FILE */

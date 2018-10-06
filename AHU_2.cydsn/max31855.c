#include "project.h"
#include <stdio.h>
#include <stdlib.h>
#include "max31855.h"

uint32_t read_max31855(uint8_t chip) 
{ 
    int i;
    uint8_t chip_bit;
    uint32_t d = 0;

    chip_bit = ~(1<<chip);
    Temp_CS_Write(chip_bit);

    CyDelayUs(250);
    // software SPI
    Temp_CLK_Write(0);
    CyDelayUs(3);
    for (i=31; i>=0; i--) {
        Temp_CLK_Write(0);
        CyDelayUs(1);
        d <<= 1;
        if (MAX31855_MISO_Read()) 
        {
            d |= 1;
        }

        Temp_CLK_Write(1);
        CyDelayUs(3);
    }

    Temp_CS_Write(0x3f);
    return d;
}

double max31855_Celsius(uint8_t chip) 
{
    int32_t v;

    v = read_max31855(chip);
    if (v & 0x05) 
    {
    // uh oh, a serious problem!
        return (v & 0x07); 
    }

    if (v & 0x80000000) 
    {
        // Negative value, drop the lower 18 bits and explicitly extend sign bits.
        v = 0xFFFFC000 | ((v >> 18) & 0x00003FFFF);
    }
    else 
    {
        // Positive value, just drop the lower 18 bits.
        v >>= 18;
    }
    double centigrade = v;
    // LSB = 0.25 degrees C
    centigrade *= 0.25;
    return centigrade;
}
double max31855_Farenheit(uint8_t chip) 
{
    float f = max31855_Celsius(chip);
    f *= 9.0;
    f /= 5.0;
    f += 32;
    return f;
}

double max31855_Internal(uint8_t chip) 
{
    uint32_t v;
    float internal;

    v = read_max31855(chip);
    if (v & 0x07)
    {
        return (v & 0x07);
    }
    // ignore bottom 4 bits - they're just thermocouple data
    v >>= 4;

    // pull the bottom 11 bits off
    internal = v & 0x7FF;
    // check sign bit!
    if (v & 0x800) 
    {
        // Convert to negative value by extending sign and casting to signed type.
        int16_t tmp = 0xF800 | (v & 0x7FF);
        internal = tmp;
    }
    internal *= 0.0625; // LSB = 0.0625 degrees
    internal *= 1.8;
    internal += 32;
    if (internal == 32)
        internal = 0;
    return internal;
}


/* [] END OF FILE */

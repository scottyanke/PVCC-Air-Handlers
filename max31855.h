#ifndef __MAX31855_H__
#define __MAX31855_H__
#include "project.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
uint32_t read_max31855(uint8_t chip);
double max31855_Celsius(uint8_t chip);
double max31855_Farenheit(uint8_t chip);
double max31855_Internal(uint8_t chip);

#endif
/* [] END OF FILE */

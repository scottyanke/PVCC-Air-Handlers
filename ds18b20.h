#ifndef __DS18B20_H__
#define __DS18B20_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "one_wire.h"

#define SKIP_ADDR_CMND 0xCC
#define WRITE_SC_PAD   0x4E
#define RESOL_12BIT 0x7F
#define START_CONVERT 0x44
#define READ_SC_PAD 0xBE
#define SETUP_DLY 1000
    
// Structure in which temperature is stored
typedef struct {
    float temperature;
    uint8_t is_valid;
} simple_float;

// Structure for returning list of devices on one wire
typedef struct {
    uint8_t size;
    one_wire_device *devices;
} ds18b20_devices;

void ds18b20_set_precision(uint8_t precision);
ds18b20_devices ds18b20_get_devices(uint8_t scan);

void ds18b20_convert_temperature_simple(void);
float ds18b20_read_temperature_simple(void);
float ds18b20_read_temperature(one_wire_device device);
void ds18b20_convert_temperature_all(void);
simple_float* ds18b20_read_temperature_all(void);

void ds18b20_wait_for_conversion(void);
float ds18b20_decode_temperature(void);

float ds18b20_get_temperature_simple(void);

#endif // __DS18B20_H__

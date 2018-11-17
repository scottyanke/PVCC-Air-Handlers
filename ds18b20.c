#include "project.h"
#include "ds18b20.h"
// this code came from assorted places.  Most of it from https://github.com/ppkt/stm32f1-ds18b20/blob/master/ds18b20.c
// the original github code was written for the STM32 series of MCUs, not the Cypress PSoC 5LP.

static uint8_t precision = 2;       // this indicates 11 bit precision from the DS18B20, don't need 12
static one_wire_device *one_wire_list_of_devices;
static uint8_t one_wire_devices_list_size = 10; // never actually got more than 6 to work...


uint8_t ds18b20_get_precision(void)
{
    return precision;
}

ds18b20_devices ds18b20_get_devices(uint8_t scan) 
{
    if (scan) 
    {
        one_wire_devices_list_size = 0;
        one_wire_list_of_devices = one_wire_search_rom(&one_wire_devices_list_size);
    }
    ds18b20_devices ret;
    ret.size = one_wire_devices_list_size;
    ret.devices = one_wire_list_of_devices;
    return ret;
}

void ds18b20_set_precision(uint8_t p) 
{
    precision = p;
    one_wire_reset_pulse();

    one_wire_write_byte(0xCC); // Skip ROM
    one_wire_write_byte(0x4E); // Write scratchpad

    one_wire_write_byte(0x4B);
    one_wire_write_byte(0x46);
    // set precision
    one_wire_write_byte(0x1F | (precision << 5));
}

void ds18b20_convert_temperature_simple(void) 
{
    one_wire_reset_pulse();
    one_wire_write_byte(0xCC); // Skip ROM
    one_wire_write_byte(0x44); // Convert temperature
}

void ds18b20_convert_temperature(one_wire_device device) 
{
    one_wire_reset_pulse();
    one_wire_match_rom(device); // Match ROM
    one_wire_write_byte(0x44); // Convert temperature
}

void ds18b20_convert_temperature_all(void) 
{
    uint8_t i = 0;
    for (i = 0; i < one_wire_devices_list_size; ++i) 
    {
        ds18b20_convert_temperature(one_wire_list_of_devices[i]);
    }
}

float ds18b20_read_temperature_simple(void) 
{
    one_wire_reset_pulse();
    one_wire_write_byte(0xCC); // Skip ROM
    one_wire_write_byte(0xBE); // Read scratchpad

    return ds18b20_decode_temperature();
}

float ds18b20_read_temperature(one_wire_device device) 
{
    ds18b20_wait_for_conversion();
    one_wire_reset_pulse();
    one_wire_match_rom(device); // Match ROM
    one_wire_write_byte(0xBE); // Read scratchpad

    return ds18b20_decode_temperature();
}

simple_float* ds18b20_read_temperature_all(void) {
    uint8_t i = 0;
    simple_float *temperatures;
    temperatures = malloc(one_wire_devices_list_size * sizeof(simple_float));

    for (i = 0; i < one_wire_devices_list_size; ++i) 
    {
        temperatures[i].temperature = ds18b20_read_temperature(one_wire_list_of_devices[i]);
        temperatures[i].is_valid = 1;
    }
    return temperatures;
}

float ds18b20_decode_temperature(void) 
{
    int i;
    uint8_t crc;
    uint8_t data[9];
    uint8_t temp_msb, temp_lsb;
    float temp;
    
    one_wire_reset_crc();

    for (i = 0; i < 9; ++i) 
    {
        data[i] = one_wire_read_byte();
        crc = one_wire_crc(data[i]);
    }

    temp_msb = data[1]; // Sign byte + lsbit
    temp_lsb = data[0]; // Temp data plus lsb

    if (crc != 0 || (!crc && !temp_msb && !temp_lsb)) 
    {
        return -100.0;
    }

    if (temp_msb & 0x08)    // is it a negative number?
        temp = ((float)((0 - (temp_msb << 8 | temp_lsb)) & 0xffff) / 16.0) * -1;
    else
        temp = (float)(temp_msb << 8 | temp_lsb) / 16.0;   // this is a positive number
    return temp;
}

void ds18b20_wait_for_conversion(void) 
{
    if (precision == 0)
        CyDelay(95);
    else if (precision == 1)
        CyDelay(190);
    else if (precision == 2)
        CyDelay(380);
    else if (precision == 3)
        CyDelay(750);
}


float ds18b20_get_temperature_simple(void) 
{
    ds18b20_convert_temperature_simple();  // we have only one device
    ds18b20_wait_for_conversion();
    return ds18b20_read_temperature_simple();
}

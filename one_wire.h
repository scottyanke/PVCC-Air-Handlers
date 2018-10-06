#ifndef __ONE_WIRE_H__
#define __ONE_WIRE_H__
#include "project.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RST_TIME 480
#define HALF_TIME_SLOT 30
#define TIME_SLOT 60
#define RCVRY_TIME 20
#define WRITE_0_TIME 60
#define WRITE_1_TIME 15
#define READ_INIT_DLY 5
#define READ_VALID_DLY 5
#define SEARCH_CMD 0xF0
#define MATCH_ROM_CMD 0x55
#define READ_ROM_CMD 0x33

typedef enum {
    ONE_WIRE_SLAVE_PRESENT,
    ONE_WIRE_ERROR
} one_wire_state;

typedef struct {
    uint8_t address[8];
} one_wire_device;

uint8_t one_wire_reset_pulse(void);
void one_wire_write_1(void);
void one_wire_write_0(void);
void one_wire_write_bit(uint8_t bit);
uint8_t one_wire_read_bit(void);
void one_wire_write_byte(uint8_t data);
uint8_t one_wire_read_byte(void);
one_wire_device * one_wire_search_rom(uint8_t *devices);
uint8_t one_wire_match_rom(one_wire_device device);
uint8_t one_wire_get_crc(void);
uint8_t one_wire_crc(uint8_t data);
void one_wire_reset_crc(void);
#endif // __ONE_WIRE_H__

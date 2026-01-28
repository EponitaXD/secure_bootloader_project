/*
 * fw_header.c
 *
 *  Created on: Jan 22, 2026
 *      Author: maria
 */

#include <stdint.h>
#include "fw_header.h"

/* This symbol should match the linker script */
#define APP_FIRMWARE_SIZE  0x18000  // placeholder for now

__attribute__((section(".fw_header"), aligned(4)))
const firmware_header_t fw_header = {
    .magic = 0xDEADBEEF,
    .size  = APP_FIRMWARE_SIZE,
    .hash  = {0}
};

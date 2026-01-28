/*
 * fw_header.h
 *
 *  Created on: Jan 25, 2026
 *      Author: maria
 */

#ifndef INC_FW_HEADER_H_
#define INC_FW_HEADER_H_

#include <stdint.h>

typedef struct {
    uint32_t magic;
    uint32_t size;
    uint8_t  hash[32];
} firmware_header_t;

#endif /* INC_FW_HEADER_H_ */

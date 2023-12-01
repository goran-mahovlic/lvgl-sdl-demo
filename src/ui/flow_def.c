#include <eez/core/vars.h>

#include "flow_def.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[1853] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0x38, 0x12, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x01, 0x00, 0x18, 0x20, 0x0C, 0x00, 0x43, 0x03, 0xE0, 0x01, 0x01, 0x28, 0x00,
    0x13, 0x02, 0x1C, 0x00, 0x00, 0x08, 0x00, 0x50, 0x1C, 0x00, 0x00, 0x00, 0x4A, 0x21, 0x00, 0x16,
    0x0C, 0x2C, 0x00, 0x11, 0x10, 0x06, 0x00, 0xB3, 0xFF, 0xFF, 0x14, 0x00, 0x00, 0x00, 0x38, 0x00,
    0x00, 0x00, 0x5C, 0x2C, 0x00, 0x00, 0x08, 0x00, 0x57, 0x1A, 0x00, 0x00, 0x00, 0x58, 0x58, 0x00,
    0x6E, 0x18, 0x00, 0x00, 0x00, 0xEC, 0x0C, 0x7C, 0x00, 0x80, 0x0A, 0x00, 0x00, 0x00, 0x98, 0x00,
    0x00, 0x00, 0x74, 0x00, 0x9F, 0xB8, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0xDC, 0x28, 0x00,
    0x00, 0xF0, 0x53, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42, 0x94,
    0x00, 0x00, 0x00, 0xB0, 0x00, 0x00, 0x00, 0xCC, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x04,
    0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x3C, 0x01, 0x00, 0x00, 0x58, 0x01, 0x00, 0x00, 0x74,
    0x01, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0xAC, 0x01, 0x00, 0x00, 0xC8, 0x01, 0x00, 0x00, 0xE8,
    0x01, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0x28, 0x02, 0x00, 0x00, 0x44, 0x02, 0x00, 0x00, 0x64,
    0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0xA4, 0x02, 0x00, 0x00, 0xC4, 0x02, 0x00, 0x00, 0xE4,
    0x02, 0x00, 0x00, 0x04, 0x03, 0xFC, 0x00, 0xF3, 0x38, 0x00, 0x00, 0x3C, 0x03, 0x00, 0x00, 0x58,
    0x03, 0x00, 0x00, 0x74, 0x03, 0x00, 0x00, 0x90, 0x03, 0x00, 0x00, 0xB0, 0x03, 0x00, 0x00, 0xCC,
    0x03, 0x00, 0x00, 0xEC, 0x03, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x24, 0x04, 0x00, 0x00, 0x40,
    0x04, 0x00, 0x00, 0x5C, 0x04, 0x00, 0x00, 0x78, 0x04, 0x00, 0x00, 0x94, 0x04, 0x00, 0x00, 0xB8,
    0x04, 0x00, 0x00, 0x10, 0x27, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xBC, 0x04, 0x00, 0x00, 0x06,
    0x08, 0x00, 0x04, 0xBC, 0x00, 0x22, 0xFF, 0xFF, 0x20, 0x00, 0x04, 0x10, 0x00, 0x00, 0x24, 0x01,
    0x1B, 0xB4, 0x20, 0x00, 0x2E, 0xE9, 0x03, 0xF4, 0x00, 0x22, 0x01, 0x00, 0x60, 0x00, 0x00, 0x20,
    0x00, 0x22, 0x04, 0x04, 0x10, 0x00, 0x22, 0x88, 0x04, 0x68, 0x00, 0x17, 0x84, 0x10, 0x00, 0x00,
    0x20, 0x00, 0x22, 0xEE, 0x03, 0x10, 0x00, 0x13, 0x7C, 0x18, 0x00, 0x22, 0x78, 0x04, 0x68, 0x00,
    0x13, 0x74, 0x20, 0x00, 0x13, 0xF6, 0x20, 0x00, 0x13, 0x6C, 0x20, 0x00, 0x13, 0x68, 0x08, 0x00,
    0x1B, 0x64, 0x40, 0x00, 0x13, 0x58, 0x18, 0x00, 0x13, 0x54, 0x40, 0x00, 0x1B, 0x50, 0x20, 0x00,
    0x13, 0x48, 0x20, 0x00, 0x13, 0x44, 0x20, 0x00, 0x1B, 0x40, 0x20, 0x00, 0x13, 0x38, 0x20, 0x00,
    0x13, 0x34, 0x20, 0x00, 0x26, 0x30, 0x04, 0x00, 0x01, 0x00, 0xB8, 0x00, 0x53, 0x28, 0x04, 0x00,
    0x00, 0x05, 0x08, 0x00, 0x0C, 0x20, 0x01, 0x01, 0x78, 0x02, 0x03, 0xE0, 0x00, 0x1B, 0x20, 0x20,
    0x00, 0x2A, 0xF3, 0x03, 0x18, 0x01, 0x13, 0x0C, 0x60, 0x00, 0x13, 0x08, 0x60, 0x00, 0x2E, 0x26,
    0x00, 0x24, 0x00, 0x22, 0xF4, 0x03, 0x24, 0x00, 0x22, 0xF0, 0x03, 0x24, 0x00, 0x00, 0x83, 0x01,
    0x22, 0xF5, 0x03, 0x60, 0x00, 0x1B, 0xE4, 0x2C, 0x00, 0x13, 0xDC, 0x24, 0x00, 0x35, 0x01, 0x00,
    0x01, 0x2C, 0x01, 0x13, 0xCC, 0x08, 0x00, 0x13, 0xC8, 0x08, 0x00, 0x2F, 0xC4, 0x03, 0x8C, 0x00,
    0x03, 0x13, 0xB0, 0x68, 0x00, 0x13, 0xAC, 0x20, 0x00, 0x1F, 0x28, 0x8C, 0x00, 0x00, 0x13, 0x98,
    0x24, 0x00, 0x13, 0x94, 0x24, 0x00, 0x17, 0x29, 0x8C, 0x00, 0x1B, 0x88, 0x2C, 0x00, 0x17, 0x80,
    0x8C, 0x00, 0x0C, 0x48, 0x00, 0x13, 0x68, 0x48, 0x00, 0x13, 0x64, 0x24, 0x00, 0x1F, 0x2A, 0x6C,
    0x00, 0x00, 0x13, 0x50, 0x24, 0x00, 0x13, 0x4C, 0x24, 0x00, 0x17, 0x2B, 0x6C, 0x00, 0x1B, 0x40,
    0x2C, 0x00, 0x17, 0x38, 0x6C, 0x00, 0x1B, 0x11, 0xA4, 0x02, 0x2A, 0x20, 0x03, 0x84, 0x01, 0x0C,
    0x20, 0x00, 0x1B, 0x08, 0x20, 0x00, 0x1B, 0x12, 0x20, 0x00, 0x22, 0xF0, 0x02, 0x64, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x20, 0x00, 0x1B, 0x13, 0x20, 0x00, 0x2A, 0xDC, 0x02, 0x40, 0x00, 0x14, 0xEA,
    0x78, 0x01, 0x1E, 0x02, 0x0C, 0x03, 0x00, 0x20, 0x00, 0x1F, 0xEB, 0x24, 0x03, 0x04, 0x13, 0xA0,
    0x60, 0x00, 0x2F, 0x00, 0x00, 0x48, 0x03, 0x07, 0x2F, 0x80, 0x02, 0x44, 0x00, 0x0B, 0x24, 0x64,
    0x02, 0x08, 0x01, 0x33, 0x00, 0x00, 0xFA, 0x40, 0x01, 0x10, 0x54, 0x18, 0x04, 0x00, 0x50, 0x01,
    0x12, 0x02, 0x10, 0x00, 0x2A, 0x58, 0x02, 0xEC, 0x02, 0x13, 0x50, 0xE0, 0x00, 0x13, 0x4C, 0x20,
    0x00, 0x26, 0x48, 0x02, 0x6C, 0x03, 0x01, 0x1C, 0x03, 0x03, 0x20, 0x00, 0x13, 0x3C, 0x08, 0x00,
    0x13, 0x38, 0x20, 0x00, 0x04, 0x60, 0x00, 0x13, 0x2C, 0x60, 0x00, 0x13, 0x28, 0x40, 0x00, 0x1B,
    0x30, 0x60, 0x00, 0x13, 0x28, 0x38, 0x00, 0x13, 0x24, 0x20, 0x00, 0x1B, 0x20, 0x60, 0x00, 0x13,
    0x18, 0x20, 0x00, 0x13, 0x14, 0x08, 0x00, 0x13, 0x10, 0x20, 0x00, 0x13, 0xEC, 0x40, 0x00, 0x1F,
    0x04, 0x48, 0x01, 0x04, 0x04, 0x01, 0x00, 0x1F, 0x07, 0x0A, 0x01, 0x00, 0x00, 0x33, 0x00, 0x26,
    0xD0, 0x01, 0x04, 0x00, 0xA2, 0xE0, 0x01, 0x00, 0x00, 0xF4, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x50,
    0x00, 0x04, 0x04, 0x00, 0x22, 0x07, 0x00, 0x54, 0x05, 0x08, 0x04, 0x00, 0x00, 0x5B, 0x01, 0x22,
    0x0C, 0x02, 0x04, 0x00, 0x00, 0x94, 0x00, 0x13, 0x08, 0xA4, 0x00, 0x00, 0x04, 0x00, 0x10, 0x09,
    0x44, 0x06, 0x12, 0x02, 0xC4, 0x00, 0x00, 0x88, 0x05, 0x13, 0x0A, 0x00, 0x01, 0x22, 0x30, 0x02,
    0x18, 0x01, 0x13, 0x0B, 0x28, 0x01, 0x22, 0x40, 0x02, 0x48, 0x01, 0x53, 0x0C, 0x00, 0x0D, 0x00,
    0x0E, 0x54, 0x01, 0x04, 0x04, 0x00, 0x22, 0x50, 0x02, 0x84, 0x01, 0x10, 0x0F, 0x64, 0x06, 0x16,
    0x02, 0x04, 0x00, 0x13, 0x64, 0x04, 0x00, 0x53, 0x6C, 0x02, 0x00, 0x00, 0x74, 0x04, 0x00, 0x11,
    0x7C, 0x5C, 0x01, 0x42, 0x10, 0x00, 0x11, 0x00, 0x0C, 0x00, 0x13, 0x05, 0x04, 0x02, 0x00, 0x04,
    0x00, 0x13, 0x88, 0x04, 0x00, 0x53, 0x90, 0x02, 0x00, 0x00, 0x98, 0x04, 0x00, 0x00, 0x44, 0x02,
    0x53, 0x12, 0x00, 0x13, 0x00, 0x14, 0x50, 0x02, 0x13, 0xA8, 0x04, 0x00, 0x53, 0xB0, 0x02, 0x00,
    0x00, 0xB8, 0x04, 0x00, 0x20, 0xC0, 0x02, 0xDC, 0x05, 0x42, 0x15, 0x00, 0x16, 0x00, 0x0C, 0x00,
    0x1F, 0xC8, 0x04, 0x00, 0x08, 0x13, 0xD0, 0x04, 0x00, 0x13, 0x17, 0xD0, 0x02, 0x22, 0xD4, 0x02,
    0xF0, 0x02, 0x7D, 0x01, 0x00, 0x03, 0x00, 0xE0, 0x02, 0x00, 0x04, 0x00, 0x13, 0xE8, 0x0C, 0x02,
    0x22, 0xEC, 0x02, 0x04, 0x00, 0x22, 0xF4, 0x02, 0x48, 0x06, 0x22, 0xF8, 0x02, 0x04, 0x00, 0x79,
    0x05, 0x00, 0x08, 0x00, 0xFC, 0x02, 0x00, 0x04, 0x00, 0x22, 0x00, 0x03, 0x84, 0x03, 0x00, 0x5C,
    0x01, 0x22, 0x0C, 0x03, 0x04, 0x00, 0x20, 0x14, 0x03, 0x5C, 0x01, 0x51, 0x02, 0x00, 0x18, 0x03,
    0x00, 0x04, 0x00, 0x01, 0xE4, 0x01, 0x12, 0xE0, 0x04, 0x00, 0xF1, 0x01, 0x45, 0xC0, 0x2C, 0x00,
    0x0A, 0xC0, 0x2D, 0x00, 0x45, 0xC0, 0x2E, 0x00, 0x03, 0xC0, 0x16, 0xC0, 0x18, 0x00, 0xF2, 0x02,
    0x20, 0x00, 0x20, 0x2F, 0x00, 0x04, 0xC0, 0x30, 0x00, 0x00, 0xC0, 0x31, 0x00, 0x02, 0xC0, 0x32,
    0x00, 0x18, 0x00, 0x53, 0x01, 0x20, 0x01, 0x20, 0x33, 0x0C, 0x00, 0x53, 0x02, 0x20, 0x02, 0x20,
    0x34, 0x0C, 0x00, 0x04, 0x4C, 0x00, 0x00, 0x50, 0x01, 0x13, 0xC4, 0x78, 0x02, 0x92, 0x35, 0x00,
    0x00, 0xE0, 0x36, 0x00, 0x00, 0xE0, 0x37, 0x1E, 0x00, 0x05, 0x54, 0x03, 0x21, 0x22, 0xC0, 0x3F,
    0x02, 0x23, 0x00, 0xB0, 0x28, 0x00, 0x00, 0x20, 0x02, 0x13, 0xA8, 0x94, 0x02, 0x12, 0x38, 0x5B,
    0x02, 0x23, 0x00, 0xA4, 0x1C, 0x00, 0x32, 0x09, 0x20, 0x3F, 0x60, 0x00, 0x07, 0x94, 0x03, 0x01,
    0xE0, 0x06, 0x03, 0x30, 0x00, 0x3F, 0x0A, 0x20, 0x40, 0x20, 0x00, 0x02, 0x13, 0x6C, 0x20, 0x00,
    0x3F, 0x0B, 0x20, 0x41, 0x20, 0x00, 0x02, 0x14, 0x50, 0x04, 0x03, 0x03, 0x04, 0x01, 0x53, 0x0C,
    0x20, 0x0C, 0x20, 0x39, 0xCC, 0x00, 0x53, 0x0D, 0x20, 0x0D, 0x20, 0x3A, 0x0C, 0x00, 0x5B, 0x0E,
    0x20, 0x0E, 0x20, 0x3B, 0xE4, 0x00, 0x53, 0x0F, 0x20, 0x0F, 0x20, 0x3C, 0x14, 0x00, 0x1B, 0x3D,
    0xDC, 0x00, 0x00, 0x5C, 0x00, 0x22, 0xF8, 0x01, 0x10, 0x00, 0x1F, 0x3E, 0x1C, 0x00, 0x00, 0x26,
    0xE0, 0x01, 0xE8, 0x04, 0x13, 0xD8, 0x0C, 0x00, 0x13, 0x3F, 0x17, 0x00, 0x22, 0xD0, 0x01, 0x24,
    0x00, 0x1F, 0x40, 0x38, 0x00, 0x00, 0x13, 0xB8, 0x2C, 0x00, 0x1F, 0x41, 0x1C, 0x00, 0x00, 0x27,
    0xA0, 0x01, 0x50, 0x06, 0x03, 0x0C, 0x00, 0x1F, 0x42, 0x28, 0x00, 0x00, 0x13, 0x80, 0x1C, 0x00,
    0x1F, 0x43, 0x1C, 0x00, 0x00, 0x17, 0x68, 0x44, 0x00, 0x2A, 0x60, 0x01, 0x1C, 0x01, 0x0C, 0x04,
    0x00, 0x01, 0xA4, 0x00, 0x0B, 0x24, 0x00, 0x00, 0x0F, 0x00, 0x26, 0x30, 0x01, 0x50, 0x00, 0x17,
    0x28, 0x0C, 0x00, 0x13, 0x20, 0x0C, 0x00, 0xD3, 0x00, 0x40, 0x00, 0xE0, 0x44, 0x00, 0x00, 0xE0,
    0x45, 0x00, 0x00, 0xE0, 0x46, 0xF4, 0x00, 0x17, 0x08, 0x28, 0x00, 0x14, 0x00, 0x54, 0x00, 0x12,
    0x40, 0x1C, 0x00, 0x17, 0xF4, 0xA0, 0x00, 0x16, 0xEC, 0x95, 0x0A, 0x23, 0xE0, 0x01, 0x77, 0x00,
    0x04, 0x54, 0x00, 0xC4, 0x47, 0x00, 0x00, 0xE0, 0x48, 0x00, 0x00, 0xE0, 0x49, 0x00, 0x13, 0xC0,
    0x8C, 0x00, 0x17, 0xC4, 0x3C, 0x00, 0x2A, 0xBC, 0x00, 0x58, 0x00, 0x17, 0xB0, 0x1C, 0x00, 0x14,
    0xA8, 0x78, 0x06, 0x03, 0x58, 0x00, 0x14, 0x9C, 0x48, 0x01, 0x0F, 0x04, 0x00, 0x84, 0xF1, 0x04,
    0x04, 0x00, 0x03, 0x00, 0x0D, 0x00, 0x04, 0x00, 0x0E, 0x00, 0x05, 0x00, 0x14, 0x00, 0x06, 0x00,
    0x03, 0x00, 0x07, 0x04, 0x04, 0xB1, 0x06, 0x00, 0x09, 0x00, 0x07, 0x00, 0x0A, 0x00, 0x08, 0x00,
    0x0B, 0x24, 0x00, 0x06, 0xCE, 0x01, 0xF1, 0x22, 0x02, 0x00, 0x0D, 0x00, 0x10, 0x00, 0x0D, 0x00,
    0x11, 0x00, 0x0A, 0x00, 0x0F, 0x00, 0x09, 0x00, 0x0C, 0x00, 0x11, 0x00, 0x12, 0x00, 0x11, 0x00,
    0x13, 0x00, 0x11, 0x00, 0x14, 0x00, 0x09, 0x00, 0x0D, 0x00, 0x14, 0x00, 0x15, 0x00, 0x14, 0x00,
    0x16, 0x00, 0x09, 0x00, 0x0E, 0x00, 0x19, 0x00, 0x17, 0xC4, 0x03, 0xF3, 0x02, 0x03, 0x00, 0x01,
    0x00, 0x08, 0x00, 0x02, 0x00, 0x04, 0x00, 0x04, 0x00, 0x06, 0x00, 0x05, 0x00, 0x05, 0x62, 0x00,
    0x11, 0x03, 0x72, 0x00, 0x13, 0x09, 0x20, 0x00, 0x11, 0x0A, 0x14, 0x00, 0x53, 0x06, 0x00, 0x08,
    0x00, 0x4C, 0x64, 0x0B, 0xF2, 0x03, 0x64, 0x01, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0x7C, 0x01,
    0x00, 0x00, 0x88, 0x01, 0x00, 0x00, 0x94, 0x01, 0xA0, 0x02, 0x00, 0x74, 0x0B, 0x00, 0xC4, 0x02,
    0x13, 0xC4, 0x40, 0x06, 0x13, 0xDC, 0x80, 0x0B, 0x12, 0xF4, 0xA3, 0x00, 0x23, 0x00, 0x0C, 0x10,
    0x06, 0x13, 0x24, 0xFC, 0x05, 0x13, 0x3C, 0xDC, 0x05, 0x00, 0x6C, 0x07, 0x13, 0x60, 0xC4, 0x05,
    0x13, 0x78, 0xA0, 0x0B, 0x00, 0xA0, 0x05, 0x13, 0x9C, 0x88, 0x05, 0x13, 0xB4, 0x80, 0x05, 0x00,
    0x4C, 0x05, 0x13, 0xD8, 0xB4, 0x0B, 0x13, 0xF0, 0x08, 0x05, 0x13, 0x08, 0xF8, 0x04, 0x00, 0xB0,
    0x08, 0x22, 0x2C, 0x03, 0xD4, 0x08, 0x22, 0x44, 0x03, 0x08, 0x09, 0x22, 0x5C, 0x03, 0x34, 0x09,
    0x00, 0xD0, 0x0B, 0x00, 0x58, 0x09, 0x22, 0x8C, 0x03, 0x8C, 0x09, 0x13, 0xA4, 0xDC, 0x0B, 0x22,
    0xBC, 0x03, 0xE0, 0x09, 0x53, 0xD4, 0x03, 0x00, 0x00, 0xE0, 0xE8, 0x0B, 0x22, 0xF8, 0x03, 0x70,
    0x0B, 0x62, 0x10, 0x04, 0x00, 0x00, 0x1C, 0x04, 0xAC, 0x0A, 0x13, 0x34, 0xF8, 0x0B, 0x22, 0x4C,
    0x04, 0x24, 0x0B, 0x00, 0x38, 0x0B, 0x22, 0x70, 0x04, 0x70, 0x0B, 0x13, 0x88, 0x08, 0x0C, 0x53,
    0xA0, 0x04, 0x00, 0x00, 0xAC, 0x10, 0x0C, 0x00, 0x5B, 0x01, 0x59, 0x01, 0x01, 0x01, 0x03, 0x01,
    0x92, 0x04, 0x01, 0x67, 0x09, 0x3A, 0x01, 0x03, 0x01, 0x1A, 0x00, 0x08, 0x88, 0x08, 0x2F, 0x00,
    0x00, 0xA0, 0x07, 0x07, 0x13, 0x0E, 0x08, 0x00, 0x2A, 0x68, 0x04, 0x20, 0x00, 0x1B, 0x05, 0x30,
    0x00, 0x1B, 0x0C, 0x10, 0x00, 0x2F, 0x01, 0x00, 0x30, 0x00, 0x0B, 0x1F, 0x00, 0x10, 0x00, 0x2C,
    0x1F, 0x02, 0x70, 0x00, 0x0C, 0x2F, 0xE8, 0x03, 0x70, 0x00, 0x3B, 0x1F, 0x19, 0x10, 0x00, 0x0C,
    0x1F, 0x02, 0x10, 0x00, 0x0C, 0x1F, 0xFA, 0x30, 0x00, 0x1C, 0x1F, 0x0F, 0x10, 0x00, 0x0C, 0x1F,
    0x14, 0x10, 0x00, 0x0C, 0x1F, 0x08, 0x10, 0x00, 0x0C, 0x0C, 0xE0, 0x00, 0x1F, 0x64, 0x50, 0x01,
    0x0C, 0x1F, 0x64, 0x40, 0x00, 0x0C, 0x1F, 0x01, 0x20, 0x01, 0x2C, 0x1F, 0x0F, 0xD0, 0x00, 0x1C,
    0x0C, 0xA0, 0x02, 0x2F, 0xCC, 0x01, 0xA0, 0x02, 0xFB, 0x0E, 0x80, 0x02, 0x0F, 0x80, 0x01, 0x1C,
    0x0F, 0x40, 0x02, 0x64, 0x80, 0x31, 0x32, 0x00, 0x00, 0x31, 0x32, 0x00, 0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
};


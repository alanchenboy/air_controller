#pragma once 

#include <cstdint>

#define AIR_SWITCH_LINE 16
#define AIR_DETECH_LINE 23

void setGPIO(int32_t line, bool enable);
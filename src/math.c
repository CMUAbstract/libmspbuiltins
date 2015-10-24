#include "msp-builtins.h"

uint32_t mspbuiltins_mult32(uint32_t a, uint32_t b)
{
    return a * b; // let GCC do the heavy lifting
}

uint16_t mspbuiltins_div16(uint16_t a, uint16_t b)
{
    return a / b; // let GCC do the heavy lifting
}

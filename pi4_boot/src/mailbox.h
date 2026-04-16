#include <stdint.h>

#define GET_MBOX_ADDR(addr, chan) (((addr) & ~0xF) | (chan & 0xF))

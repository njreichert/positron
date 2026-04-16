#include <stdint.h>

#define GET_MAILBOX_ADDR(addr, chan) (((addr) & ~0xF) | (chan & 0xF))

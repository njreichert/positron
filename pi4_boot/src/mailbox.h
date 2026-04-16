#include <stdint.h>

#define GET_MBOX_ADDR(addr, chan) (((addr) & ~0xF) | (chan & 0xF))

uint32_t mbox_status();

uint32_t mbox_read();

void mbox_write(uint32_t addr, uint8_t chan);

void mbox_block_until_ready();

void mbox_block_until_response();

void mbox_write_prop_msg(uint32_t *msg);
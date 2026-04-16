#include "raspi4_reg_defs.h"
#include "mailbox_regs.h"
#include "mailbox.h"
#include "mmio_util.h"

uint32_t mbox_status()
{
    return mmio_read_uint32_t(MBOX_STATUS(MBOX_BASE));
}

uint32_t mbox_read()
{
    return mmio_read_uint32_t(MBOX_READ(MBOX_BASE));
}

void mbox_write(uint32_t addr, uint8_t chan)
{
    mmio_write_uint32_t(MBOX_WRITE(MBOX_BASE), GET_MBOX_ADDR(addr, chan));
}

void mbox_block_until_ready()
{
    while (mbox_status() & MBOX_FULL) { }
}

void mbox_block_until_response(uint32_t expected_val)
{
    while ((mbox_status() & MBOX_EMPTY) || (mbox_read() != expected_val)) { }
}


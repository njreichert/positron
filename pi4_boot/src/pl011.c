#include <stdint.h>

#include "mmio_util.h"
#include "pl011_regs.h"

void pl011_init(
    uint32_t base_addr,
    uint16_t int_div,
    uint8_t frac_div
)
{
    // For now, force 115200 8n1.
    // 8 bits, fifos enabled, 1 stop bit, parity disabled
    uint32_t lcr_h_val = 0b01110000;

    // Enable RX/TX
    uint32_t cr_val = (1 << 9) | (1 << 8);

    mmio_write_uint32_t(PL011_UARTLCR_H(base_addr), lcr_h_val);
    mmio_write_uint32_t(PL011_UARTIBRD(base_addr), int_div);
    mmio_write_uint32_t(PL011_UARTFBRD(base_addr), frac_div);
    mmio_write_uint32_t(PL011_UARTCR(base_addr), cr_val);
}

void pl011_write_char(uint32_t base_addr, char c)
{
    mmio_write_uint8_t(PL011_UARTDR(base_addr), (uint8_t) c);
}
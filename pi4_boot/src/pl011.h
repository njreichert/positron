#include <stdint.h>

// Requires clock setup at some point.
void pl011_init(
    uint32_t base_addr,
    uint16_t int_div,
    uint8_t frac_div
);

void pl011_write_char(uint32_t base_addr, char c);
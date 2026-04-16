#include <stddef.h>

#include "pl011.h"
#include "earlycon_defs.h"
#include "raspi4_reg_defs.h"
#include "mailbox.h"

static uint32_t pl011_earlycon_base_addr;

/// @brief Do some extra setup with mailboxes to make 
/// @param baudrate 
void pl011_earlycon_init(uint32_t baudrate, void *args)
{
    pl011_earlycon_base_addr = *(uint32_t *)args;

    // Per https://wiki.osdev.org/Raspberry_Pi_Bare_Bones, initialize
    // Clock to 3 MHz and figure out how the hell all of this works later.
    volatile uint32_t alignas(16) msg[9] = {
        9*4, 0, 
            0x38002, 12, 8, 
                2, 3000000, 0, 
            0,
    };

    mbox_write_prop_msg(msg);
    pl011_init(pl011_earlycon_base_addr, 1, 40);
}

void pl011_earlycon_putchar(char c)
{
    pl011_write_char(pl011_earlycon_base_addr, c);
}

size_t pl011_earlycon_puts(const char *str)
{
    size_t num_chars_written = 0;
    if (str) {
        while (*str != '\0') {
            pl011_write_char(pl011_earlycon_base_addr, *str);
        }
    }
    
    return num_chars_written;
}

static EarlyconCtx pl011_uart0_earlycon = {
    .init_handler = pl011_earlycon_init,
    .putchar_handler = pl011_earlycon_putchar,
    .puts_handler = pl011_earlycon_puts,
};

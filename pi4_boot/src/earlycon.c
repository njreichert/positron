#include "raspi4_reg_defs.h"

#include "earlycon.h"
#include "earlycon_defs.h"

static EarlyconCtx earlycon_ctx;

void earlycon_init(EarlyconCtx *con, uint32_t baudrate, void *init_args)
{
    earlycon_ctx.init_handler = con->init_handler;
    earlycon_ctx.putchar_handler = con->putchar_handler;
    earlycon_ctx.puts_handler = con->puts_handler;
    earlycon_ctx.init_handler(baudrate, init_args);
}

size_t earlycon_puts(const char *str)
{
    return earlycon_ctx.puts_handler(str);
}

size_t earlycon_putchar(char c)
{
    earlycon_ctx.putchar_handler(c);
}

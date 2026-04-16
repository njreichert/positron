#include "raspi4_reg_defs.h"

#include "earlycon.h"
#include "earlycon_defs.h"

static EarlyconCtx *earlycon_ctx;

void earlycon_init(EarlyconCtx *which_con, uint32_t baudrate)
{
    earlycon_ctx = which_con;
    earlycon_ctx->init_handler(baudrate);
}

size_t earlycon_puts(const char *str)
{
    return earlycon_ctx->puts_handler(str);
}

size_t earlycon_putchar(char c)
{
    earlycon_ctx->putchar_handler(c);
}

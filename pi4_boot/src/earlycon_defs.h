#include <stdint.h>
#include <stddef.h>

typedef void (*EarlyconInitHandler)(uint32_t);
typedef size_t (*EarlyconPutsHandler)(char *);
typedef size_t (*EarlyconPutcharHandler)(char);

/// @brief To be populated by drivers wishing to register as an earlycon.
typedef struct EarlyconCtx {
    /// @brief Will pass baud rate to init handler, expects something vaguely 8n1.
    EarlyconInitHandler init_handler;

    EarlyconPutcharHandler putchar_handler;
    EarlyconPutsHandler puts_handler;
} EarlyconCtx;

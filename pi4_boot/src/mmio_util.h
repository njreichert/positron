#include <stdint.h>


static inline void mmio_write_uint8_t(uint8_t addr, uint8_t val)
{
    *(volatile uint8_t *)(addr) = val;
} 

static inline void mmio_write_uint8_t(uint8_t addr, uint8_t val)
{
    *(volatile uint8_t *)(addr) = val;
} 


static inline void mmio_write_uint16_t(uint16_t addr, uint16_t val)
{
    *(volatile uint16_t *)(addr) = val;
} 

static inline void mmio_write_uint16_t(uint16_t addr, uint16_t val)
{
    *(volatile uint16_t *)(addr) = val;
} 


static inline void mmio_write_uint32_t(uint32_t addr, uint32_t val)
{
    *(volatile uint32_t *)(addr) = val;
} 

static inline void mmio_write_uint32_t(uint32_t addr, uint32_t val)
{
    *(volatile uint32_t *)(addr) = val;
} 

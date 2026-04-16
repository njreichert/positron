#include <stdint.h>


static inline void mmio_write_uint8_t(uint8_t addr, uint8_t val)
{
    *(volatile uint8_t *)(addr) = val;
} 

static inline uint8_t mmio_read_uint8_t(uint8_t addr)
{
    return *(volatile uint8_t *)(addr);
} 


static inline void mmio_write_uint16_t(uint16_t addr, uint16_t val)
{
    *(volatile uint16_t *)(addr) = val;
} 

static inline uint16_t mmio_read_uint16_t(uint16_t addr)
{
    return *(volatile uint16_t *)(addr);
} 


static inline void mmio_write_uint32_t(uint32_t addr, uint32_t val)
{
    *(volatile uint32_t *)(addr) = val;
} 

static inline uint32_t mmio_read_uint32_t(uint32_t addr)
{
    return *(volatile uint32_t *)(addr);
} 

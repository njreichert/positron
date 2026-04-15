#include <stdint.h>

void kernel_main(uint64_t dtb_ptr32, uint64_t x1, uint64_t x2, uint64_t x3)
{
  uint32_t i = 0xdeadbeef;

  while (1) {
    i++;
  }
}
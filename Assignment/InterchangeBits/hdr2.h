#include <stdio.h>

#define swap_first_last_bytes(num) \
  ((((num) & 0xF0000000) >> 28) | \
  ((num) & 0x0FFFFFF0) | \
  (((num) & 0x0000000F) << 28))

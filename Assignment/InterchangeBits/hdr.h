#include<stdio.h>
#define swap_bytes(num) \
((unsigned int)(((num) & 0x000000FF) << 24) |\
 (unsigned int)(((num) & 0x0000FF00)<< 8) |\
 (unsigned int)(((num) & 0x00FF0000) >> 8)|\
 (unsigned int)(((num) & 0xFF000000) >> 24))

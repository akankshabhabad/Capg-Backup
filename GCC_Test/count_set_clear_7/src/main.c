
#include "../include/hdr.h"

int main()

{
 unsigned int num;
 printf("Enter the number:");
 scanf("%u", &num);
 printf("Original number is: %u", num);
 unsigned int set = count_set_bits(num);
 printf("\nSET bits: %u", set);
 unsigned int reset = count_clear_bits(num);
 printf("\nRESET bits: %u", reset);
 return 0;
}

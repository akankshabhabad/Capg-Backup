
#include <stdio.h>
#include<stdlib.h>

unsigned int swap_bits_within(unsigned int num, unsigned int s, unsigned int d);

int swap_bits_between(unsigned int *snum, unsigned int *dnum, unsigned int s, unsigned int d);

unsigned int toggleEven(unsigned int num);

unsigned int toggleOdd(unsigned int num);

#define test_set_bit(num, p) (num|=(1<<(p)))

unsigned short left_rotate(unsigned short n,unsigned short d);

unsigned short right_rotate(unsigned short n,unsigned short d);

unsigned int count_set_bits(unsigned int num);

unsigned int count_clear_bits(unsigned int num);

unsigned int count_leading_set_bits(unsigned int num);

unsigned int count_leading_clear_bits(unsigned int num);

unsigned int count_trailing_set_bits(unsigned int num);

unsigned int count_trailing_clear_bits(unsigned int num);

#define toggle_bits(num,s,d) ((num) ^ (((1u<<(d+1))-1) & ~((1u<<s)-1)))

#define maximum(num1,num2) ((num1)^ ((num1)^(num2)) & -((num1)<(num2)))

#define minimum(num1,num2) ((num2)^ ((num1)^(num2)) & -((num1)<(num2)))


#define set_rightmost_bit(num) ((num) | ((num)+1))

#define clear_rightmost_bit(num) ((num) & ((num)-1))

#define set_bits(num,s,d) (((1u<<(d+1))-1) & ~((1u<<s)-1))

unsigned int invert_bits (unsigned int snum, unsigned int p, unsigned int n);

#define get_bits(snum, p, n) (((snum) >> (p - n + 1)) & ((1 << (n)) - 1))


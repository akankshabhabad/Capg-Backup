#include <stdio.h>

#define set_bits(num,s,d) (((1u<<(d+1))-1) & ~((1u<<s)-1))

#define clear_bits(num,s,d) (~((1u<<(d+1))-1) | ((1u<<s)-1))

#define toggle_bits(num,s,d) ((num) ^ (((1u<<(d+1))-1) & ~((1u<<s)-1)))

#define maximum(num1,num2) ((num1)^ ((num1)^(num2)) & -((num1)<(num2)))

#define minimum(num1,num2) ((num2)^ ((num1)^(num2)) & -((num1)<(num2)))

#define set_rightmost_bit(num) ((num) | ((num)+1))

#define clear_rightmost_bit(num) ((num) & ((num)-1))


#include "../include/hdr.h"

void main()
{
	unsigned int num,s,d;
	printf("Enter the number:");
	scanf("%u",&num);
	printf("Enter the first bit to be swapped:");
	scanf("%u",&s);
	printf("Enter the second bit to be swapped:");
	scanf("%u",&d);
        unsigned int result=swap_bits_within(num,s,d);
	printf("Number after swapping: %d",result);
}


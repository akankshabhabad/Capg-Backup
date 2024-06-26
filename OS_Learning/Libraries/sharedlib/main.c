#include<stdio.h>
#include "hdr.h"
int main(void)
{
	int a, b;
	a = 15;
	b = 10;
	printf("Addition : %d \n Subtraction : %d \n", add(a,b), sub(a,b));
	return 0;
}

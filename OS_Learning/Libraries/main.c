#include<stdio.h>
#include "hdr.h"
int main(void)
{
	int n1, n2;
	printf("Enter first number:");
	scanf("%d", &n1);
	printf("\nEnter second number:");
	scanf("%d", &n2);
	add(n1, n2);
	sub(n1, n2);
}

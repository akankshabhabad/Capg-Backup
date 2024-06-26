#include<stdio.h>
int main()
{
	unsigned int num;
	printf("Enter number: ");
	scanf("%x", &num);
    num = (num << 24) | (num >> 24) | ((num & 0X00FF0000) >> 8) | ((num & 0X0000FF00) << 8);

	printf("OX%X\n", num);

	return 0;


}

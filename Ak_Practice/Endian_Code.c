#include<stdio.h>

int main(void)
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	char *ptr= (char *) &num;
	if(*ptr)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return 0;
}


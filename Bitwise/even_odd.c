#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if((num & 1)==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}

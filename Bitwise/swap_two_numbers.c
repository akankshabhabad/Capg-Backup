#include<stdio.h>
void swap(int a,int b)
{

a=a^b;
b=a^b;
a=a^b;
printf("\nAfter swapping a and b are: %d  %d",a,b);

}
void main()
{
	int n1,n2;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("Before swapping a and b are: %d  %d",n1,n2);
	swap(n1,n2);

}


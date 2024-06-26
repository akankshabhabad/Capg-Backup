#include<stdio.h>
void main()
{
int num;
int pos;
printf("Enter the number:");
scanf("%d",&num);
printf("Enter the position:");
scanf("%d",&pos);
int mask=1<<pos;

if((num & mask) !=0)
{
	printf("Set");
}
else
{
	printf("Reset");
}
}

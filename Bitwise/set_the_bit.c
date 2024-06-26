#include<stdio.h>
void main()
{
    int num,pos;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the position:");
    scanf("%d",&pos);
    int mask=(1 << pos);
    num =num | mask;
    printf("After setting %dth bit: %d",pos,num);
}


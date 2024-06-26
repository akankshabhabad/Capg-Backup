#include<stdio.h>
void main()
{
    int num,pos;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the position to be cleared:");
    scanf("%d",&pos);
    int mask= ~(1 << pos);
    num = num & mask;
    printf("After clearing %dth bit : %d",pos,num);
}

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int result = (num) & (num-1);
    printf("After clearing last set bit: %d",result);
}

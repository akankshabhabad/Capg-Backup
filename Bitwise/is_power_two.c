#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(((num) & (num-1))==0)
    {
        printf("Yes,%d is power of 2",num);
    }
    else
    {
        printf("No, %d is not power of 2",num);
    }
}


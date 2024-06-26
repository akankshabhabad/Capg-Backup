#include<stdio.h>

int set_bits(int);

void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int res = set_bits(num);
    printf("Number of 1-bits in %d is: %d\n",num, res);
}

int set_bits(int num)
{
    int count=0;

    while(num > 0)
    {
       if(num & 1)
       {
           count++;
       }
       num = num >> 1;

    }
    return count;
}

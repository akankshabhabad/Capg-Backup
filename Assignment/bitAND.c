#include<stdio.h>

int main(void)
{
    int a ,b ;
    a = 5;  // 0101
    b = 3;  // 0011

   printf("\nResult : %d\n", (a & b));  // 0001

   return 0;
}

#include "../include/hdr.h"

int main(void)
{
    int num , result;

    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Original Number: %d\n", num);
    result = reverseNum(num);
    printf("Reverse Number: %d\n", result);

    return 0;
}


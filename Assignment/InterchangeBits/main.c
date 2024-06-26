#include "hdr.h"

int main(void)
{
    unsigned int num;
    printf("Enter the hexadecimal number: ");
    scanf("%X",&num);
    
    printf("Input : 0x%X\n", num);

    unsigned int result= swap_bytes(num);

    printf("Result : 0x%X\n", result);
    return 0;
}


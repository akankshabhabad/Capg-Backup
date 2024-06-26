#include "../include/hdr.h"

int main(void)
{
    int num;
    printf("Enter the number:");
    
    scanf("%d",&num);
    if(powerOfTwo(num))
    {
        printf("\nNumber is power of 2\n");
    }
    else
    {
        printf("\nNumber is not power of 2\n");
    }
    return 0;
}

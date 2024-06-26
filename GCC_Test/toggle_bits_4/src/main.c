

#include "../include/hdr.h"

int main() {
                
unsigned int num;
printf("Enter the number:");
scanf("%d",&num);
printf("Before toggling number is: %d",num);
unsigned int even=toggleEven(num);
printf("\nAfter toggling even index bits: %d",even);
unsigned int odd=toggleOdd(num);
printf("\nAfter toggling odd index bits: %d",odd);
}


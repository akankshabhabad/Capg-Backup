
#include "../include/hdr.h"

int main() {
        
        
 unsigned int num;
 unsigned int pos;
 printf("Enter the number:");
 scanf("%d",&num);
 printf("Enter the position where you want to set bit:");
 scanf("%d",&pos);
 printf("Before set bit: %d",num);
 unsigned int res=test_set_bit(num,pos);
 printf("\nAfter set bit: %d",res);

}


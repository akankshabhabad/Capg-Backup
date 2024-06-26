
#include "../include/hdr.h"

int main() {
 unsigned int num=10,num2=20,res1,res2,res3,res4,res5,res6,res7,res8;
 res1=set_bits(num,1,3);
 printf("After setting bits from 1 to 3: %d",res1);
 res2=clear_bits(num,1,3);
 printf("\nAfter clearing bits from 1 to 3: %d",res2);
 res3=toggle_bits(num,1,3);
 printf("\nAfter togglling bits from 1 to 3: %d",res3);
 res4=maximum(num2,num);
 printf("\nMaximum between 10 and 20: %d",res4);
 res7= minimum(num2,num);
 printf("\nMinimun between 10 and 20: %d", res7);
 res5=set_rightmost_bit(num);
 printf("\nAfter setting rightmost bit: %d",res5);
 res6=clear_rightmost_bit(num);
 printf("\nAfter clearing rightmost bit: %d",res6);

}

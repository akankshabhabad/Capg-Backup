#include "../include/hdr.h"

int main()

{
        unsigned int snum; 
        unsigned int dnum;
        unsigned int s;      
        unsigned int d;      

        printf("Enter the first number:");
        scanf("%u",&snum);
        printf("Enter the second number:");
        scanf("%u",&dnum);
        printf("Enter the number from you want to swap bit:");
        scanf("%u",&s);
        printf("Enter the number to you want to swap bit:");
        scanf("%u",&d);
        printf("Original numbers: snum = %u, dnum = %u\n", snum, dnum);

                                                            
       int result = swap_bits_between(&snum, &dnum, s, d);

                                                               
       if (result == 0)
       {
                 
           printf("Numbers after swapping bits between positions %u and %u: snum = %u, dnum = %u\n", s, d, snum, dnum);
        } 
       else
       {
              printf("Invalid bit positions\n");
       }              
           return 0;
}



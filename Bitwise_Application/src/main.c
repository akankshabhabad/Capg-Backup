#include "../include/hdr.h"
void main()
{
int choice;



printf("*********************************************************Bitwise Operators Application******************************************************************");
do
{
    printf("\n\n**********List of Options**********");
    printf("\n\n1. Swap bits within s and d");
    printf("\n2. Swap bits between s and d");
    printf("\n3. Toggle even and odd bits");
    printf("\n4. Test and set bit at position p");
    printf("\n5. Rotate left and right bits");
    printf("\n6. Count set and clear bits");
    printf("\n7. Count leading/trailing set and clear bits");
    printf("\n8. Find minimun and maximum ");
    printf("\n9. Clear rightmost set bit");
    printf("\n10. Set rightmost clear bit");
    printf("\n11. Toggle Bits");
    printf("\n12. Set bits from s to d:");
    printf("\n13. Get the bits");
    printf("\nEnter zero to exit.....");
    printf("\n\nEnter your choice:");
    scanf("%d",&choice);
  
    unsigned int n,p,pos,snum, dnum, num,s,d,num1,num2;


  
        switch(choice)
        {
            case 1:
                
              printf("\nEnter the number:");
              scanf("%u",&num);
               printf("\nEnter the number from where you want to set bits :");
               scanf("%u",&s);
               printf("\nEnter the number to where you want to set bits:");
               scanf("%u",&d);
               unsigned int result = swap_bits_within(num, s, d);
               printf("\nOriginal number: %u\n", num);
               printf("\nNumber after swapping bits %u and %u: %u\n", s, d, result);
               
               break;


            case 2:


               printf("\nEnter the first number:");
               scanf("%u",&snum);
               printf("\nEnter the second number:");
               scanf("%u",&dnum);
               printf("\nEnter the number from you want to swap bit:");
               scanf("%u",&s);
               printf("\nEnter the number to you want to swap bit:");
               scanf("%u",&d);
               printf("\nOriginal numbers: snum = %u, dnum = %u\n", snum, dnum);

                                                   
                int result1 = swap_bits_between(&snum, &dnum, s, d);

                                                      
                 if (result1 == 0) {
                  printf("\nNumbers after swapping bits between positions %u and %u: snum = %u, dnum = %u\n", s, d, snum, dnum);
                  } 
                   else {
                  printf("\nError: Invalid bit positions\n");
                   }

                   break;


            case 3:
               
              printf("\nEnter the number:");
              scanf("%u",&num);
              printf("\nBefore toggling number is: %u",num);
              unsigned int even=toggleEven(num);
              printf("\nAfter toggling even index bits: %u",even);
              unsigned int odd=toggleOdd(num);
              printf("\nAfter toggling odd index bits: %u",odd);
                
              break;


            case 4:


              printf("\nEnter the number:");
              scanf("%u",&num);
              printf("\nEnter the position where you want to set bit:");
              scanf("%u",&pos);
              printf("\nBefore set bit: %u",num);
              unsigned int res=test_set_bit(num,pos);
              printf("\nAfter set bit: %u",res);

              break;


            case 5:

             printf("\nEnter an unsigned integer : ");
             scanf("%X",&n);
             printf("\nEnter the number of positions to rotate : ");
             scanf("%X",&d);
             unsigned short leftResult=left_rotate(n,d);
             unsigned short rightResult=right_rotate(n,d);
             printf("Left rotated number is : %x\n",leftResult);
             printf("Right rotated number is : %x",rightResult);

             break;


            case 6:


             printf("\nEnter the number:");
             scanf("%u", &num);
             printf("\nBefore toggling number is: %u", num);
             unsigned int set = count_set_bits(num);
             printf("\nSET bits: %u", set);
             unsigned int reset = count_clear_bits(num);
             printf("\nRESET bits: %u\n", reset);

             break;


            case 7:

             printf("\nEnter number:");
             scanf("%d",&num); 
             printf("\nInput number: %u\n", num);
             printf("Number of leading set bits: %u\n", count_leading_set_bits(num));
             printf("Number of leading clear bits: %u\n", count_leading_clear_bits(num));
             printf("Number of trailing set bits: %u\n", count_trailing_set_bits(num));
             printf("Number of trailing clear bits: %u\n", count_trailing_clear_bits(num));
               
             break;


            case 8:

 
            printf("\nEnter two numbers: ");
            scanf("%u %u", &num1, &num2);
            unsigned int res4=maximum(num2,num);
            printf("\nMaximum number: %u",res4);
            unsigned int res5=minimum(num2,num);
            printf("\nMinimum numer: %u",res5);
                                                         

           break;

           case 9:
            
              
              printf("\nEnter the number:");
              scanf("%u",&num);
              printf("Original number: %u\n", num);
              unsigned int ress = clear_rightmost_bit(num);
              printf("Number after clearing the rightmost set bit: %u\n", ress);


            break;


           case 10:

              printf("\nEnter the number:");
              scanf("%u",&num);
               printf("Original number: %u\n", num);
               unsigned int resss = set_rightmost_bit(num);
               printf("Number after setting the rightmost clear bit: %u\n", resss);
 

            break;


           case 11:
                

                printf("\nEnter the number:");
               scanf("%u",&num);
               printf("\nEnter the number from where you want to set bits :");
                scanf("%u",&s);
                printf("\nEnter the number to where you want to set bits:");
                scanf("%u",&d);
                 printf("\nOriginal number: %u\n", num);
               unsigned int  res3=toggle_bits(num,1,3);
                 printf("\nAfter togglling bits: %u",res3);


                 break;

           case 12:

        printf("Enter the number:");
         scanf("%d",&num);
         printf("Enter the number from where you want to set bits :");
         scanf("%d",&s);
         printf("Enter the number to where you want to set bits:");
         scanf("%d",&d);
         printf("Original number: %u\n", num);
        unsigned int res_s = set_bits(num, s, d);
         printf("Number after setting bits from position %d to %d: %u\n", s, d, res_s);    

          
           case 13:

                 printf("\nEnter the number: ");
                 scanf("%u",&snum);
                 printf("\nEnter the position: ");
                  scanf("%u",&p);
                  printf("\nEnter the number of bits: ");
                  scanf("%d", &n);
                  unsigned int resultt = get_bits(snum, p, n);
                                               
                   printf("\n n-bit field (left-adjusted) starting at position %u: %u\n", p, resultt); 

                   break;

         

           default:

                   printf("\nExiting...\n");
                   exit(0);
    
        }


     }while(choice!=0);
}

             
















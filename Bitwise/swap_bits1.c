#include <stdio.h>
 
unsigned int swap_bits_within(unsigned int num, unsigned int s, unsigned int d) {
 unsigned int result;
 // Extract the bits at positions s and d
 unsigned int bit_s = (num >> s) & 1;
 unsigned int bit_d = (num >> d) & 1;
		          
// If the bits are different, swap them
if (bit_s != bit_d)
{
       	unsigned int x= bit_s^ bit_d;   // swap two bits
        x=(x<<s)|(x<<d);
        result= num^ x;  // XOR operation to toggle the bits
 }
  return result;
  }
		                                                      
int main() {
		                                                           
unsigned int num, s, d;
		                                                                 
printf("Enter an unsigned integer: ");
scanf("%u", &num);
printf("Enter the position of the first bit to be swapped: ");
scanf("%u", &s);
		                                                                                   
printf("Enter the position of the second bit to be swapped: ");
scanf("%u", &d);
		                                                                                            
printf("Original number: %u\n", num);
                                                                                                                     
printf("Number after swapping bits at positions %u and %u: %u\n", s, d, swap_bits_within(num, s, d));
return 0;
  }
		
 

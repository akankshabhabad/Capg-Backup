#include <stdio.h>
 
unsigned int swap_bits_within(unsigned int num, unsigned int s, unsigned int d) {
	    unsigned int result;
	        
	        unsigned int bit_s = (num >> s) & 1;
		    unsigned int bit_d = (num >> d) & 1;
		     
		       
		        if (bit_s != bit_d) 
				    {
					           
					        unsigned int x= bit_s^ bit_d;  
						    x=(x<<s)|(x<<d);
						        result= num^ x;  
							    
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



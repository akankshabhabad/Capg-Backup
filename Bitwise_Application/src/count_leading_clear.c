unsigned int count_leading_clear_bits(unsigned int num) {
unsigned int count = 0;
int size = sizeof(unsigned int) * 8; 
                
for (int i = size - 1; i >= 0; i--) {
 
    if (!((num >> i) & 1)) {
           count++;
   }
    else
    {
                                                                    
       break;
    }
  }
   return count;
}

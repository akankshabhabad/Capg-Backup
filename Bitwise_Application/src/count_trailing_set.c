unsigned int count_trailing_set_bits(unsigned int num) {
unsigned int count = 0;
int size = sizeof(unsigned int) * 8; 
                
 for (int i = 0; i < size; i++) {
                           
  if ((num >> i) & 1)
  {
    count++;
  }
  else
  {
                                                                    
   break;
   }
 }
    return count;
}


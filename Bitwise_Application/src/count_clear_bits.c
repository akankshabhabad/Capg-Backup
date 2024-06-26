unsigned int count_clear_bits(unsigned int num) {
unsigned int count1=0;
while(num)
{
    if(!(num & 1))
       {
          count1++;
       }
 num=num>>1;
}
 return count1;
}

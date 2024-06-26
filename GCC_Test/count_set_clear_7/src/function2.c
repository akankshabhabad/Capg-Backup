unsigned int count_clear_bits(unsigned int num)
{
unsigned int count2 = 0;
for (int i = 0; i < sizeof(num) * 8; i++)    
{
if (!(num & (1 << i))) {
   count2++;
   }
 }
   return count2;
}

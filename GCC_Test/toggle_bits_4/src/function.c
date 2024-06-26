
unsigned int toggleEven(unsigned int num)
{
  unsigned int start=2;
  while(num>=start)
  {
      num=num^start;
      start=start<<2;
  }
      return num;
}

unsigned int toggleOdd(unsigned int num)
{
  unsigned int start=1;
  while(num>=start)
  {
    num=num^start;
    start=start<<2;
  }
   return num;
}

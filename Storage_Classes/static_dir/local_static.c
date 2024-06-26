#include<stdio.h>

int increment();

int main()
{

    int value;
  value= increment();
  value=increment();
  value=increment();

  printf("Count = %d\n", value);
  return 0;



}

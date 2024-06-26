#include<stdio.h>
int increment();
extern int count;

void main()
{
int value;
value = increment();
value = increment();
count=count+3;
value=count;
printf("Count : %d",value);


}



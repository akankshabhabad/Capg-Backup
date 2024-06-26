#include<stdio.h>
extern int w;
void fun();

int main(void)
{
   fun();
}

void fun()
{
    printf("Value of external variable x: %d",w);
}

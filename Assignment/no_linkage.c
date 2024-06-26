#include <stdio.h>

void fun();

int main(void)
{

    fun();
//    printf("%d\n", a);  // Error: a is not accessible here
    return 0;
}

void fun()
{
    int a=10;
    printf("Local variable a= %d",a);  //a has no linakage, it is local to fun() functiom
}

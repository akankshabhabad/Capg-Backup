
#include <stdio.h>

static int x= 20;  // x has internal linkage, unique to this file only
void fun();

int main(void)
{
    fun();
}


void fun() {
    printf("Static variable x: %d\n", x);
}






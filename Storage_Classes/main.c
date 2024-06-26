#include<stdio.h>

void fun();


static int d=30;
extern int x;
void main()

{
    int a=10; //auto variable
    register int b=20; //register variable
    static int z=40;
    printf("\nValue of auto variable a : %d",a); //printing value of auto variable
    printf("\nValue of register variable b: %d", b); //printing value of register variable
//    printf("Value of c: %d", c); //printing value of local static variable
    printf("\nValue of global static variable d: %d", d); //printing global static / file static variable
    printf("\nValue of extern variable x: %d", x); //printing extern variable
//    printf("\nValue of block static variable s: %d",s);
    fun();
  
}

static int s=400;

void fun()
{ 
    static int c=70;
    printf("\nValue of local static c from function fun: %d\n", c);
    printf("Value of block variable s : %d\n", s);
}



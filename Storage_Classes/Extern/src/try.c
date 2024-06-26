#include<stdio.h>
void f1();
void f2();
void f3();



int a=10;

int main()
{
    int a=20;
    printf("%d\n", a);
    f1();
    f2();
    f3();
}

void f1()

  {
      printf("%d\n", a);
  }
//a=30;
 void f2()
{

    printf("%d\n",a);
}

void f3()
{
    printf("%d", a);
}

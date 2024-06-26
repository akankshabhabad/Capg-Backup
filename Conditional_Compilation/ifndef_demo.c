#include<stdio.h>

#define PI 3.14

int main()
{
  float r;
  printf("Enter the radius:");
  scanf("%f",&r);

#ifndef AREA

   printf("Area of circle: %f\n", (PI * r * r));
#else

   printf("Circumference of circle: %f\n", (2* PI* r));
#endif

    return 0;


}

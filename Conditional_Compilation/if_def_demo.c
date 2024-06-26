#include<stdio.h>

#define PI 3.14


int main()
{
    float r;
    printf("Enter the radius of circle:");
    scanf("%f",&r);

#ifdef AREA
    printf("Area of circle is %f\n", (PI*r*r));      //Skipped this part because AREA macro is not defined
#endif

printf("Circumference of circle is %f\n", (2* PI* r));

return 0;
}

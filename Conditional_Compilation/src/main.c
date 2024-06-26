#include "../include/hdr.h"

int main()
{
float r;
 printf("Enter the radius of circle:");
 scanf("%f",&r);

/* #ifdef AREA
 printf("Area of circle is %f\n", (PI*r*r));
*/
/* #ifdef CIRCUM

 printf("Circumference of circle is %f\n", (2* PI*r));
*/


#ifndef CIRCUM

 printf("A is not defined");

#else

 printf("Bye...");

#endif
 return 0;

}


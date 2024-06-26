#include<stdio.h>
#include<string.h>

void main()
{
    char src[10] = "Capgemini";
    char *dst = "Akanksha";
    printf("String after copy : %s\n", strcpy(dst , src));
//    printf("dst[4]: %c", dst[4]);
  //  printf("dst[5]: %c", dst[5]);
}

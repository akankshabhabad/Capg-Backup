#include "../include/hdr.h"

void main()
{
    char src[10] = "Capgemini";
    char dest[10];
    my_strcpy(dest , src);
    printf("After copy destination string will be: %s\n" , dest); 
}

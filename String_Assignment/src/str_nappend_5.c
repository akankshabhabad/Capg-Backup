
#include<string.h>
char *strnappend(char *dest , const char *src , int n)
{
    int len = strlen(dest);
    int i;
    i = len;
    char *ptr = dest;
    while(*src != '\0' && n > 0) 
    {
        *(dest + i) = *src;
        src++;
        i++;
        n--;
    }
    *(dest + i) = '\0';
    return ptr;
}

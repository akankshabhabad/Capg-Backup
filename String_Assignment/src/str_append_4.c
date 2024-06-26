//extern size_t strlen (const char *__s);
#include<string.h>
char *strappend(char *dest , const char *src)
{
    int len = strlen(dest);
    int i;
    i = len;
    char *ptr = dest;
    while(*src != '\0')
    {
        *(dest + i) = *src;
        src++;
        i++;
    }
    *(dest + i) = '\0';
    return ptr;
}


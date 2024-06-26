#include "../include/hdr.h"
char* strinschr(char *str , const char ch , int pos)
{
    int i , j;
    i = 0, j = 0;
    char *str2 = (char*) malloc(SIZE * sizeof(char));
    if(str2 == NULL)
    {
        printf("Memory allocation failed");
    }
    
    while(*(str + i) != '\0' && i < pos)
    {
        *(str2 + j) = *(str + i);
        i++; 
        j++;
    }
    *(str2 + j) = ch;
    j++;
    
    while(*(str + i) != '\0')
    {
        *(str2 + j) = *(str + i);
        i++;
        j++;
    }
    *(str2 + j) = '\0';

    return str2;


}

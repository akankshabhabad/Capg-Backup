#include<string.h>
int strpalin(char *str)
{

    int i = 0;
    int j = strlen(str) - 1;
    while( *(str + i) != '\0' && i < j)
    {
        if(*(str + i) == *(str + j))
        {
            i++;
            j--;
        }
        else
            return 0;
    } 
    return 1;
}

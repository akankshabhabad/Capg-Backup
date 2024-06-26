#include<string.h>
void reverse_string(char* str)
{
    int i = 0;
    int j = strlen(str) - 1;
    
    while(*(str + i) != '\0' && i < j)
    {
        *(str + i) ^= *(str + j);
        *(str + j) ^= *(str + i);
        *(str + i) ^= *(str + j);
        i++;
        j--;
    }

}

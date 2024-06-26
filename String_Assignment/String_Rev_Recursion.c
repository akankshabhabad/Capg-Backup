#include <stdio.h>
#include<string.h>

void reverseString(char *str , int len) 
{
    static int i =0;
    char temp;
    if(i < len)
    {
        temp = *(str + i);
        *(str + i) = *(str + len);
        *(str + len) = temp;
        i++;
        len--;       
        reverseString(str , len);
    }
    
}

int main(void) 
{
    char str[50];
    printf("Enter the string:");
    fgets(str , sizeof(str) , stdin);
    int len = strlen(str)-1;
    printf("Original string: %s\n", str);
    
    printf("Reversed string: ");
    reverseString(str , len);
    printf("%s\n", str);
    
    return 0;
}

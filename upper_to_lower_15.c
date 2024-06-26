#include<stdio.h>

char* upperToLower(char*);

void main()
{
    char str[50];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    upperToLower(str);
    printf("String after converting lowercase to upercase: %s\n", str);

}
char* upperToLower(char *str)
{
    int i;
    i=0;
    while(*(str+i)!='\0')
    {
       if(*(str+i) >= 'A' && *(str+i) <= 'Z')
       {
           //*(str+i) += 32;
           *(str+i) += 'a' - 'A';
       }
       i++;
    }
    
    return str;

}

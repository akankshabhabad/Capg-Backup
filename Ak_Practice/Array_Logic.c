#include<stdio.h>
#define SIZE 10

void printArray(char *);

void main()
{
    char str[SIZE] = "Capgemini";
    
    printArray(str + 5);   // print(& str[5])    
}

void printArray(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n" , *str);
        str++;
    }
}



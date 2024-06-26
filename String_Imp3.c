#include<stdio.h>
#define SIZE 10

int countChar(char * );

void main()
{
    char str1[SIZE] = "Capgemini";

    printf("Count of i in %s: %d\n", str1 , countChar(str1));

}

int countChar(char *str)
{
    int count=0; 

    while(*str != '\0')
    {

         if(*str == 'i')
             count++;

         str++;
    }
    return count;

 }

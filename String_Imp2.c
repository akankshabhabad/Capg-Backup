#include<stdio.h>
#define SIZE 10

void printChar(char * );

void main()
{
    char str1[SIZE] = "Capgemini";

   // printChar(str1 + 5); 
      printChar(&str1[5]); // String starts from 5th position 

}

void printChar(char *str)
{
   /* int i = 0;

    while(*(str+i) != '\0')
    {
        printf("%c\n" , *(str+i));
        i++;
    }
    */

    while(*str != '\0')
    {
        printf("%c\n" , *(str));
        str++;
    }
}

#include<stdio.h>
#include<string.h>
#define SIZE 20

int countChar(char * , char );

void main()
{
   
    char str1[SIZE] , ch;
    printf("Enter the string: ");
    fgets(str1 , sizeof(str1), stdin);
    str1[strcspn(str1 , "\n")] = '\0';
    printf("Enter the character which you want to count: ");
    scanf("%c" , &ch);
    printf("Count of %c in %s: %d\n" , ch ,  str1 , countChar(str1 , ch));

}

int countChar(char *str , char ch)
{
    int count = 0;

    while(*str != '\0')
    {

         if(*str == ch)
             count++;

         str++;
    }
    return count;

 }

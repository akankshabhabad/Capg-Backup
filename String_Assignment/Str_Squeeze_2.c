/*
#include<stdio.h>
#define SIZE 20
#include<string.h>
char* strsqueeze(char * , char);
void main()
{
    char str[SIZE];
    char ch;
    printf("Enter the string: ");
    fgets(str , SIZE , stdin);
    str[strcspn(str , "\n")] = '\0';
    //printf("%s this",str);
    scanf("\n");
    scanf("%c",&ch);
    printf("String after squeezing : %s" ,strsqueeze(str, ch));
    printf("%s" , str);
}

char* strsqueeze(char *str , char ch)
{
    char* temp = str;
    char* res = temp; 
    printf("%s" , str);    

    while(*str != '\0')
    {
        if(*str != *(str + 1))
                
           {
                *temp = *str;
                temp++;
           }

		 str++;
	}
        *temp = '\0';
     
    return res;
}

*/



#include <stdio.h>
#include <string.h>

#define SIZE 20

char* strsqueeze(char*, char);

int main() {
    char str[SIZE];
    char ch;

    printf("Enter the string: ");
    fgets(str, SIZE, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to squeeze: ");
    scanf(" %c", &ch);  // Added a space before %c to consume leading whitespace

    printf("String after squeezing: %s\n", strsqueeze(str, ch));

    return 0;
}

char* strsqueeze(char* str, char ch) {
    char* temp = str;
    char* res = temp;

    while (*str != '\0') {
        if (*str != ch || *(str + 1) != ch) {
            *temp = *str;
            temp++;
        }
        str++;  // Move to the next character
    }
    *temp = '\0';  // Terminate the resulting string

    return res;
}


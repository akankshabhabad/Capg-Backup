#include<stdio.h>
#include<string.h>
#define SIZE 50
 
void strcpy1(char *, char *);
void strcpy2(char *, char *);
void strcpy3(char *, char *);
 
int main (void)
{
    char str1[SIZE];
    char str2[SIZE];
    printf("Enter string 1: " );
    fgets(str1, sizeof(str1), stdin);
    str1 [strcspn (str1, "\n")] = '\0';
 
    printf("Enter string 2: " );
    fgets(str2, sizeof(str2), stdin);
    str2 [strcspn (str2, "\n")] = '\0';
 
    strcpy1(str1, str2);
    printf("Copied string using 1st method: %s\n", str1);
    strcpy2(str1, str2);
    printf("Copied string using 2nd method: %s\n", str1);
    strcpy3(str1, str2);
    printf("Copied string using 3rd method: %s\n", str1);
    return 0;
 
}
 
void strcpy1 (char *str1, char *str2)
{
    int i;
    i = 0;
    while ((str1[i] = str2[i]) != '\0')
        i++;
 
}
 
void strcpy2 (char *str1, char *str2)
{
    int i;
    i = 0;
    while( (*str1 = *str2) != '\0')
    {
        str1++;
        str2++;
    }
}
 
void strcpy3(char *str1, char *str2)
{
    while (*str1++ = *str2++)
        ;
}

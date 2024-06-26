#include<stdio.h>
#include<string.h>
#define SIZE 50
 
int strlen1 (char []);
int strlen2 (char *);
int strlen3 (char *);
 
int main (void)
{
    char str[SIZE];
    printf("Enter string: " );
    fgets(str, sizeof(str), stdin);
    str [strcspn (str, "\n")] = '\0';
 
    printf("Length of string using 1st method: %d\n", strlen1 (str));
    printf("Length of string using 2nd method: %d\n", strlen2 (str));
    printf("Length of string using 3rd method: %d\n", strlen3 (str));
    return 0;
 
}
 
int strlen1 (char str[])
{
    int i;
    i = 0;
 
    while (str [i] != '\0')
        i++;
    return i;
}
 
int strlen2 (char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}
 
int strlen3 (char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
        ptr++;
    return ptr - str;
}

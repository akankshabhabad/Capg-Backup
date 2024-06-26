#include<stdio.h>
#include<string.h>
int str_length1(char *);
int str_length2(char *);
int str_length3(char *);
void  main()
{
    char str[50];
    printf("Enter the string: ");
    fgets(str , sizeof(str) , stdin);
    str[strcspn(str , "\n")] = '\0';
    printf("Length of string : %d\n", str_length1(str));
    printf("Length of string : %d\n", str_length2(str));
    printf("Length of string : %d\n", str_length3(str));
}

int str_length1(char *str)
{
    int i;
    i = 0;
    while(*(str + i)!= '\0')
    {
      i++;
    }
    return i;
}

int str_length2(char *str)
{
    char *temp;
    temp = str;
    while(*temp != '\0')
    {
        temp++;
    }
    
    return (temp - str);
}

int str_length3(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

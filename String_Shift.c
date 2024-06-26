#include<stdio.h>
#include<string.h>
#define SIZE 20

char* shift(char * , int);

void main()
{

    char str1[SIZE];
    int pos;
    printf("Enter the string: ");
    fgets(str1 , sizeof(str1), stdin);
    str1[strcspn(str1 , "\n")] = '\0';
    printf("Enter the position from which you want to shift characters: ");
    scanf("%d" , &pos);
    printf("After shifting from %d from %s string will be: %s\n" , pos , str1 , shift(str1 , pos));

}

char* shift(char *str , int pos)
{

    int i;
    i = pos - 1;
    while(*(str + i) != '\0')
    {
        *(str + i) = *(str + i + 1);
        i++;
    }
    return str;
 }

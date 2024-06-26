#include<stdio.h>
#include<string.h>
#define SIZE 20
char* replace_vowels_with_CG(char *);

void main()
{
    char str[SIZE];
    printf("Enter the string:");
    fgets(str , sizeof(str), stdin);
    str[strcspn(str , "\n")] = '\0';
    printf("String after replacing vowels with CG: %s" , replace_vowels_with_CG(str));
}


char* replace_vowels_with_CG(char *str)
{
    char* str2;
    int i , j;
    while(*(str + i) != '\0')
    { 
        if(*(str + i) == 'a' || *(str + i) == 'A' || *(str + i) == 'e' || *(str + i) == 'E' || *(str + i) == 'i' ||
                *(str + i) == 'I' || *(str + i) == 'o' || *(str + i) == 'O' || *(str + i) == 'u' || *(str + i) == 'U')
        {
            *(str2 + j) = 'C'
               
        }





    }




}

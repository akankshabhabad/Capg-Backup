


#include<stdio.h>
#include<string.h>

int isAlphabet(char);

int main()
{
 char str[50];
 int i,j;
 printf("Enter the string:");
 fgets(str, sizeof(str), stdin);
 for(i = 0 ,j = 0; str[i]!='\0' ; i++)
 { 
      if(isAlphabet(str[i]) || str[i] == ' ')
         {
           str[j] = str[i];
           j++;
         }
}
str[j] = '\0';
printf("String after removing non alphabets: %s\n",str);

}

int isAlphabet(char ch)
{
    return (ch >= 'A' && ch <= 'Z' || ch >='a' && ch <='z');
}

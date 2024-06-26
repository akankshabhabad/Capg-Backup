#include<stdio.h>
#include<string.h>
void str_copy1(char * , char *);
void str_copy2(char * , char *);
void str_copy3(char * , char *);

void main()
{
  char str1[50], str2[50];
  printf("Enter the string:");
  fgets(str2 , sizeof(str2) , stdin);
  str2[strcspn(str2 , "\n")] = '\0';
  printf("You have entered : %s\n ", str2);
  str_copy1(str1 , str2);
  printf("After copy string will be : %s\n", str1);
  str_copy2(str1 , str2);
  printf("After copy string will be : %s\n", str1);
  str_copy3(str1 , str2);
  printf("After copy string will be : %s\n", str1);

}

void str_copy1(char *str1 , char *str2)
{
   
    while(*str2 != '\0')
    {  
        *str1 = *str2;
        str1++;
        str2++;
    }

}


void str_copy2(char *str1 , char *str2)
{
    int i = 0;
    while(str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
}

void str_copy3(char *str1 , char *str2)
{
    while(*str2 != '\0')
    {
        *str1++ = *str2++;
    }
}

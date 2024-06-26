#include<stdio.h>
#include<string.h>
#define SIZE 50

int str_cmp1(char * , char *);
void str_cmp2(char * , char *);
void str_cmp3(char * , char *);

void main()
{
  char str1[SIZE], str2[SIZE];
  printf("Enter the first string: ");
  fgets(str1 , sizeof(str1) , stdin);
  printf("Enter the second string: ");
  fgets(str2 , sizeof(str2) , stdin);
  str2[strcspn(str2 , "\n")] = '\0';
  int res = str_cmp1(str1 , str2);
  printf("%d\n" , res);
  
  
  /*printf("After copy string will be : %s\n", str1);
  str_cmp2(str1 , str2);
  printf("After copy string will be : %s\n", str1);
  str_cmp3(str1 , str2);
  printf("After copy string will be : %s\n", str1);*/

}

int str_cmp1(char *str1 , char *str2)
{
    int i = 0;
    while(str1[i] != '\0')
    {
        if(str1[i] == str2[i])
        {
            return 0;
        }
        else
        {
            return str1[i] - str2[i];
        }
        i++;
    }

}


/* void str_copy2(char *str1 , char *str2)
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
}*/

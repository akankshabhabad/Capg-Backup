#include<stdio.h>
void main()
{
    char str[50];
    int i , j;
    printf("Enter the string :");
    fgets(str, sizeof(str),stdin);
    i = 0;

    while(*(str + i)!='\0')
    {
      if((*(str + i) == 'a'))
      {
          j = i;
          while(*(str + j)!='\0')
          {
            *(str + j) = *(str + j + 1);
            j++;
          }
      }

      else
      {
          i++;
      }
    }
    printf("String after deleting a: %s\n", str);
}

#include<string.h>

int countWords(char *str)
{
    int count;
    count = 0;
   /* while(*str != '\0')
    {
      if(*str == ' ')
      {
          count++;
      }
    
      str++;
    }
    */



 char *token = strtok(str , " \t\n");
 while(token != NULL)
 {
     count++;
     token = strtok(NULL , " \t\n");
 }
   // return count + 1;
      return count ;
}

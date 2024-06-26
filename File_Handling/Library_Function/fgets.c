#include<stdio.h>   
void main()
{  
    FILE *fp;  
    char c;  
      
    fp=fopen("text1.txt","r");  
  
    while((c=fgetc(fp))!=EOF)
    {     
        printf("%c",c);  
    }  
    fclose(fp);  
   
}  

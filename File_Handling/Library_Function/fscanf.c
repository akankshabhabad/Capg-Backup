#include <stdio.h>  
void main()
{  
   FILE *fp;  
   char buff[255];//creating char array to store data of file  
   fp = fopen("text4.txt", "r");  
   while(fscanf(fp, "%s", buff)!=EOF)
   {  
        printf("%s ", buff );  
   }  
   fclose(fp);  
}  

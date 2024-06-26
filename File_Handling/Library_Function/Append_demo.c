#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main(void)
{
	FILE *fp;
	char buff[MAX];
	char str[MAX];

	fp = fopen("Append.txt", "a");
	if(fp < 0)
	{
		perror("fopen() failed");
		exit(1);
	}
   
   printf("Enter the string which you want to append: ");
   scanf("%s", str);

   fputs(str, fp);

   while(
   fclose(fp);
	
	return 0;
}

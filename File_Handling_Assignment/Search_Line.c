#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100


int main(void)
{
	char buff[MAX], input[50];
	int count = 0;
	FILE *fp;
    fp = fopen("Search.txt", "r");
	if(fp == NULL)
	{
		perror("fopen() failed");
		exit(1);
	}

	printf("Enter the string which you want to search: ");
//    fgets(input, sizeof(input), stdin);
	scanf("%s", input);

	while((fgets(buff, MAX, fp)) != NULL)
	{
        count++;
		if(strstr(buff, input))
		{
			printf("%d : %s", count, buff);
		}
	}
    
	fclose(fp);
	return 0;

}



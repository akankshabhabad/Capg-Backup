#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

int main(void)
{
	int fd, n, count = 0;
	char buff[MAX];

	fd = open("Count.txt", O_RDONLY);

	if(fd < 0)
	{
		perror("open() failed");
		exit(1);
	}

    int in_word= 0;

	while((n = read(fd, buff, MAX) )> 0)
	 {
		 for(int i = 0; i < n; i++)
		 {
			 if(isspace(buff[i]))
			 {
				 in_word = 0;
			 }

			 else
			 {
				 if(!in_word)
				 {
					 count++;
					 in_word = 1;
				 }
			 }

		 }

	 }

	 printf("Number of word in the file : %d\n", count);
	 close(fd);

	 return 0;
 
}

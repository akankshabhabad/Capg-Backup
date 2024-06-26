#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main(void)
{
	pid_t pid;
	int fd;
	fd = open("text.txt", O_CREAT | O_RDWR);
	if(fd < 0)
	{
		perror("Error");
		exit(0);
	}

	pid = fork();
	if(pid < 0)
	{
		perror("Child is not created");
		exit(0);
	}
	else if(pid == 0)
	{
		char str[20] = "I AM IN CHILD\n";
	    write(fd, str, 15);
	//	write(fd, "I AM IN CHILD\n", 15);
	}
	else
	{
	
		write(fd, "I AM IN PARENT\n", 15);
	}
	return 0;
}

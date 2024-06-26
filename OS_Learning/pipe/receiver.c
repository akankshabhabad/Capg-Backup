#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(void)
{
	int fd, n;
	char buffer[100];
	fd = open("fifo1", O_RDONLY);
	n = read(fd, buffer, 100);
	printf("Reader process having PID %d started\n", getpid());
	printf("Data received by receiver %d is : %s\n", getpid(), buffer);
	return 0;

}

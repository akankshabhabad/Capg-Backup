#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(void)
{
	int fd, n;
	fd = open("fifo1", O_WRONLY);
	write(fd, "Hello Everyone!!!\n", 15);
	printf("Sender process having PID %d sent the data\n", getpid());
	return 0;
}

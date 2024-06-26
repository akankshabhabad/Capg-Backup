#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
int main(void)
{
        int fd, n;
        char buffer[100];
	//	mkfifo("mkfifo", 0777);
        fd = open("mkfifo1", O_RDONLY);
        n = read(fd, buffer, 100);
        printf("Reader process having PID %d started\n", getpid());
        printf("Data received by receiver %d is : %s\n", getpid(), buffer);
		close(fd);
        return 0;

}

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(void)
{
        int fd, n;
		mkfifo("mkfifo1", 0666);
        fd = open("mkfifo1", O_WRONLY);
        write(fd, "Hello from Akanksha!!!\n", 22);
        printf("Sender process having PID %d sent the data\n", getpid());
		close(fd);
        return 0;
}

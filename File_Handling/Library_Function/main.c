#include<errno.h>
#include<sys/types.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(void)
{
    int fd=open("hellooo.txt", O_CREAT|O_RDWR, 0777);

    
    write(fd, "Hello world", 10);
    printf("%d\n", fd);

    if(fd < 0)
    {
        printf("error no: %d\n", errno);
        
        perror("");
    }
    return 0;
}

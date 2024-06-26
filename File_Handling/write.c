#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int fd = open("write.txt" , O_CREAT|O_RDWR, 0755);
    if(fd < 1)
    {
        perror("Open() failed");
        exit(1);
    }

    char str[100];

    printf("Enter the string:");
    fgets(str, 100, stdin);

    write(fd, str, sizeof(str));
}

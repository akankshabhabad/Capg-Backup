
//Program for reading 20 characters from the text.txt and write it on screen

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{

    int n, fd;
    char buf[50];
    fd = open("text.txt", O_RDONLY);
    n = read(fd, buf, 20);
    write(1, buf, n);
    printf("\n");
    return 0;
}

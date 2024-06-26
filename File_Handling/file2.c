//Program for reading data from text.txt and write into the target.txt

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
    int n, fd1, fd2;
    char buf[50];
    fd1 = open("text.txt", O_RDONLY);
    n = read(fd1, buf, 30);
    fd2 = open("target.txt", O_CREAT|O_WRONLY|O_TRUNC, 0642);
    write(fd2, buf, n);
    printf("\n");
    close(fd1);
    close(fd2);
    return 0;
}

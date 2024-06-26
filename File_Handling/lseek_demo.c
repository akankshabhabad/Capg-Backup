//Program for printing first 10 characters and then second 10 characters from the file

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, fd1;
    char buf[50];

    fd1 = open("lseek.txt", O_RDWR);
    read(fd1, buf, 10); //1234567890
    write(1, buf, 10);
    read(fd1, buf , 10); //abcdefghij
    write(1, buf, 10);

    close(fd1);

    return 0;
}

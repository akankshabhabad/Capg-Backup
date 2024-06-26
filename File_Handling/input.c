/* This program takes input from console and store it into the file , but this program shows error because we 
have deleted that target4.txt and without creating O_CREAT we directly use WRONLY */

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
    
    fd1 = open("target4.txt",O_CREAT|O_WRONLY, 0642);
    if( fd1 < 0)
    {
        perror("open() failed");   //perror is a function in C that is used to print a descriptive error message to the standard error stream (stderr).
        exit(0);
    }
    read(0, buf , 20);
    write(fd1, buf, 20);
   
    close(fd1);
   
    return 0;
}

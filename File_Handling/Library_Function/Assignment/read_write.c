#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
     int fd;
     char buffer[60];
     fd = open("file1.txt",O_RDWR);
     if(fd < 0)
     {
         perror("open() failed");
         exit(1);
     }

     read(fd , buffer, sizeof(buffer));

     write(1 , buffer, sizeof(buffer));

     close(fd);
}


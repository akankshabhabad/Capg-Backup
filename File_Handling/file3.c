//Reading from console and write it into the target2.txt file


#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
    int n, fd;
    char buf[50];
    n = read(0, buf, 30);
    fd = open("target2.txt", O_CREAT|O_WRONLY|O_TRUNC, 0644);
    write(fd, buf, n);
    
    return 0;
}

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, f;
    char buf[50];

    f = open("lseek.txt", O_RDWR);
    read(f, buf , 10);
    write(1, buf, 10);
    lseek(f, 5, SEEK_CUR);
    read(f, buf, 10);
    write(1, buf, 10);

    close(f);

    return 0;
}

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, f, f1;
    char buf[50];

    f = open("lseek.txt", O_RDWR);
    f1 = lseek(f, 10, SEEK_SET);
    printf("Pointer is at %d position\n", f1);
    read(f, buf, 10);
    write(1, buf, 10);

    close(f);

    return 0;
}

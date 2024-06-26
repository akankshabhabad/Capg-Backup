#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int fp;
    fp = open("sample.txt", O_RDWR, 0777);
    if(fp < 0)
    {
        perror("open() failed");
        exit(1);
    }

    return 0;
}

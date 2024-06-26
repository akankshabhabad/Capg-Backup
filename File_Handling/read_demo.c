#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count, fd1;
    char buf[50];

    count = read(0, buf, sizeof(buf));
    if(count == 0)
    {
        printf("Reached end of file\n");
    }
    else
    {
        if(count < sizeof(buf))
        {
            printf("Bytes read is less than the size\n");
        }
        else
        {
            if(count < 0)
            {
                perror("read() failed\n");
            }
        }
    }

    return 0;
}

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

int main()
{
    int fd, n, i;
    char buff[MAX];

    fd= open("Lower.txt", O_CREAT|O_RDWR, 0777);
    if(fd < 0)
    {
        perror("open() failed");
        exit(1);
    }

    while((n = read(fd, buff, MAX)) > 0)
    {
        for(i = 0;i < n;i++)
        {
            if(isupper(buff[i]))
            {
                buff[i] = tolower(buff[i]);
            }
        }
    }

    lseek(fd, 0, SEEK_SET);
    write(fd, buff, MAX);

    return 0;
}

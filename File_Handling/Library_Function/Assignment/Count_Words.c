#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

int main(void)
{
    int fd, n, i, count = 0;
    char buff[MAX];
    
    fd = open("Count.txt" , O_CREAT|O_RDWR, 777);
    if(fd < 0)
    {
        perror("open() failed");
        exit(1);
    }

    while((n = read(fd, buff, MAX)) > 0)
    {
        for(i = 0;i<MAX;i++)
        {
                                           
           if(buff[i]==' ')                            //if(isspace(buff[i]))
            {
                count++;
            }
        }
    }


    printf("Number of words in the file: %d\n", count + 1);

}

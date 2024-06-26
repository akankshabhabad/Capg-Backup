#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

int main(void)
{
    int fd,n,i;
    char buff[MAX];
    char ch;

    fd = open("out.txt" , O_CREAT | O_RDWR, 777);
 
    if(fd < 0)
    {
        perror("open() failed");
        exit(1);
    }

    while ((n = read(fd, buff, MAX)) > 0)
    {
        for (int i = 0; i < n; i++) 
            if (isupper(buff[i]))
            {
                buff[i] = tolower(buff[i]);
            }
     
    }
    

    //read(fd, buff, MAX);
    //write(1, buff, MAX);

    lseek(fd, 0, SEEK_SET);

    write(fd, buff, MAX); 
    return 0;
}

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main(void)
{
        pid_t pid;
        FILE *fp;
        fp = fopen("text2.txt","w");
        if(fp == NULL)
        {
                perror("Error");
                exit(0);
        }

        pid = fork();
        if(pid < 0)
        {
                perror("Child is not created");
                exit(0);
        }
        else if(pid == 0)
        {
                fprintf(fp, "I am in child process\n");
        }
        else
        {

                fprintf(fp, "I am in parent process\n");
        }
        return 0;
}

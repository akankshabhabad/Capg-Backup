#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(void)
{

        pid_t pid;
		int status;
        pid = fork();
        if(pid < 0)
        {
                perror("Error");
                exit(0);
        }
        else if(pid == 0)
        {
			fork();
			wait(&status);
			printf("In child\n");

		}
		else
		{
			printf("In parent\n");
		}
                   
                                /*printf("Hello \n");
                                fork();
                                printf("Hii\n");
                                fork();
                                printf("Bye Bye\n");
                                fork();
                                printf("I'm there for you\n");
								*/
                return 0;
}

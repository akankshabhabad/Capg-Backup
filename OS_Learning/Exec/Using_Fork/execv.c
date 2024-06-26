#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(void)
{
        pid_t pid;
        pid = fork();
        if(pid < -1)
        {
                perror("Error\n");
        }
        else if(pid == 0)
        {
                printf("I am in child process\n");
                printf("Child process PID : %d\n My parent PID : %d\n", getpid(), getppid());

				char *argv[] = {"ls" , "-l", "-s", NULL};
				execv("/bin/ls", argv);

        }
        else
        {
               
                printf("I'm in parent process\n");

			//	char *argv[] = {"ls" , "-l", "-s", NULL};
			//	execv("/bin/ls", argv);
				printf("Parent PID: %d\n", getpid());

        }

    return 0;

}

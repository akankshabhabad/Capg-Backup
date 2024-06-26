#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(void)
{
        pid_t pid;
        pid = vfork();
        if(pid < -1)
        {
                perror("Error\n");
        }
        else if(pid == 0)
        {
                printf("I am in child process\n");
                execl("./execv2", "./execv2", NULL);
                
                printf("Child process PID : %d\n", getpid());
				_exit(0);
        }
        else
        {
                printf("I am in parent process\n");
                printf("Parent process PID: %d\n", getpid());

        }

    return 0;

}

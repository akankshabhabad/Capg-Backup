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
                printf("Child process PID : %d\n Parent process PID : %d\n", getpid(), getppid());
				
		}
		else
		{
                execl("/bin/ps", "ps", NULL);
                printf("Parent PID: %d\n", getpid());

        }

    return 0;

}

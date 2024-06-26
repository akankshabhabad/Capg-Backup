#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(void)
{
        pid_t pid;
		pid_t pid1;
        pid = fork();

		int status;
        if(pid < 0)
        {
                perror("Error\n");
        }
        else if(pid == 0)
        {
			   // wait(&status);  // No special difference happens because parent executes first and then child executes
                printf("I am in child process\n");
                printf("Child process PID : %d\n", getpid());
          
        }
	/*	pid1 = fork();
		if(pid1 == 0)
		{
			printf("I am in second child\n");
			printf("Second PID: %d\n", getpid());
		}
   */
		
        else
        {
                wait(&status);
                printf("I am in parent process\n");
     

        }

    return 0;

}

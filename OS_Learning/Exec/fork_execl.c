#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(void)
{
	pid_t pid;
    int status;
	pid = fork();
	if(pid < -1)
	{
		perror("Error\n");
	}
	else if(pid == 0)
	{
		printf("I am in child process\n");
		printf("Child process PID : %d\n", getpid());
		execl("./execv2", "./execv2", NULL);
	}
	else
	{
		wait(&status);
		printf("I am in parent process\n");
		printf("Parent process PID: %d\n", getpid());
	
	}

    return 0;

}

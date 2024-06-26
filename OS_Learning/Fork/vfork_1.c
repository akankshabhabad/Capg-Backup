#include<stdio.h>
#include<unistd.h>

int glob=6;
int main(void)
{
	int var;
	var=88;
	pid_t pid;
	printf("Before vfork()\n");
	if((pid=vfork())<0)
	{
		perror("Error");
	}
	if(pid == 0)
	{
		glob++;
		var++;
		printf("PID =%d", getpid());

		_exit(0);    // terminate child
	}
	printf("PPID = %d , PID = %d , glob= %d , var = %d\n", getppid(), getpid(), glob, var); // parent 
	return 0;

}

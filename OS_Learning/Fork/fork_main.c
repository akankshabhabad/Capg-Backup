#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int glob = 6;
int main(void)
{
        int var;
        var = 88;
        pid_t pid;
        printf("Before vfork()\n");
		
		//vfork() system call gives only one output because at a time only one process will execute.

        if((pid = vfork()) < 0)
        {
                perror("Error");
        }
        if(pid == 0)
        {
                glob++;
                var++;
				_exit(0);   //terminate the child process, kernel removes all the resources that file occupied
			//	exit(0);    // it will provide more controlled way, Exit handler clears all the standard i/o buffer which was occupied by that process.
        }
        printf("PPID = %d , PID = %d , glob= %d , var = %d\n", getppid(), getpid(), glob, var);
	
        //fork() system call gives two outputs one is for parent process and one is for child process

        printf("\n\nBefore fork()\n");
        if((pid = fork()) < 0)
        {
                perror("Error");
        }
        if(pid == 0)
        {
                glob += 3;
                var += 3;
        }
        printf("PPID = %d , PID = %d , glob= %d , var = %d\n", getppid(), getpid(), glob, var); 
        return 0;

}

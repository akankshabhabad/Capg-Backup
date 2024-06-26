#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
        int var;
        var = 88;
        pid_t pid;
        pid = fork();
        if(pid < 0)
        {
                perror("Error");
				exit(0);
        }
		else if(pid == 0)
		{
			printf("Child is created\n");
		}
		else
		{
			sleep(10);    // parent goes to secondary storage from main memory using swapped out , after sleeping back to main memory using swapper ( swapped in)

			printf("Parent Process\n");
		}
		return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
 
int main()
{
    pid_t cpid;
    if (fork()== 0)
	{
		printf("Child execute\n");
		printf("Child pid = %d\n", getpid());
        exit(0);           /* terminate child */
	}
    else
	{
     //   cpid = wait(NULL); /* reaping parent */
    printf("Parent pid = %d\n", getpid());
  //  printf("Child pid = %d\n", cpid);
	}
 
    return 0;
}

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(void)
{
       
        pid_t pid;
		int status;
		printf("Beginning...\n");
        pid = fork();
        if(pid < 0)
        {
                perror("Error");
                exit(0);
        }
        else if(pid == 0)
        {
            printf("Child is created\n");
			printf("Child pid : %d\n", getpid());
        }
              
        else
        {
                        
          int cpid= wait(NULL);      //Parent is on wait until it child complete its process
          printf("Parent Process\n");
		  printf("Parent pid : %d\n", getpid());
		  printf("My child id is: %d\n", cpid);
       }
			
                return 0;
}

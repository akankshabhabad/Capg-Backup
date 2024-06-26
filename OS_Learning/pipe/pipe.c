#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(void)
{
	int fd[2], n;
	char msg[100];
	char buffer[100];
	pid_t pid;
	pipe(fd);
	pid = fork();
	if(pid > 0)   //Parent process
	 {
		 close(fd[0]);
		 printf("Enter the message which you want to send: ");
		 fgets(msg, sizeof(msg), stdin);
		 printf("Passing value to child\n");
		 write(fd[1], msg, sizeof(msg));
		 close(fd[1]);
		 wait(NULL);
	 }
	 else
	 {
		 close(fd[1]);
		 n = read(fd[0], buffer, 100);
		// write(1, buffer, n);
		 close(fd[0]);
		 printf("Child received message: %s\n", buffer);

	 }
	 return 0;
}

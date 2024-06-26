#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define SIZE 20

int main()
{
	int fds[2];
	pid_t pid;
	
	char msg[SIZE];

	if(pipe(fds) == -1)
	{
		perror("pipe() failed\n");
		exit(EXIT_FAILURE);
	}

	pid = fork();
	if(pid < 0)
	{
		perror("fork() failed\n");
		exit(EXIT_FAILURE);
	}

	if(pid > 0)
	{
		printf("In Parent process\n");
        // Close the unused write end of the pipe
        close(fds[1]);
        // Read from the pipe
        read(fds[0], msg, SIZE);
        printf("Message received from child: %s\n", msg);
        // Close the read end of the pipe
        close(fds[0]);
    }
    // Child process
    else {
        printf("In Child process\n");
        // Close the unused read end of the pipe
        close(fds[0]);
        // Write to the pipe
        printf("Enter a message to send to parent: ");
        fgets(msg, SIZE, stdin);
        write(fds[1], msg, SIZE);
        // Close the write end of the pipe
        close(fds[1]);
    }
    return 0;
}

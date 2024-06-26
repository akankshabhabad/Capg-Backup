#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid;
    int status;
    pid = fork();
    
    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    }
    else if (pid == 0) { // Child process
        printf("Child process executing\n");
        exit(0);
    }
    else { // Parent process
        printf("Parent process waiting for child to finish\n");
        wait(&status); // Parent waits for child to terminate
        printf("Child process terminated, parent continuing\n");
    }

    return 0;
}


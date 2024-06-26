#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid < 0) {
        // Fork failed
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (child_pid == 0) {
        // Child process
        printf("Child process: PID = %d, Parent PID = %d\n", getpid(), getppid());
        sleep(2); // Simulate some work
        printf("Child process: Exiting\n");
        exit(EXIT_SUCCESS);
    } else {
        // Parent process
        printf("Parent process: PID = %d\n", getpid());
        printf("Parent process: Child PID = %d\n", child_pid);
        
        // Wait for the child process to finish
        int status;
        pid_t terminated_child_pid = wait(&status);
        if (terminated_child_pid == -1) {
            perror("wait");
            exit(EXIT_FAILURE);
        }

        printf("Parent process: Child process with PID %d has terminated\n", terminated_child_pid);
    }

    return 0;
}


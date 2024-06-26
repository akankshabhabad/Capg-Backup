#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid < 0) {
        // Error handling
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (child_pid == 0) {
        // Child process
        printf("Child process: My PID is %d\n", getpid());
        sleep(2); // Simulate some work
        printf("Child process: Exiting\n");
    } else {
        // Parent process
        printf("Parent process: My PID is %d\n", getpid());
        printf("Parent process: Child PID is %d\n", child_pid);
        printf("Parent process: Exiting\n");
    }

    return 0;
}


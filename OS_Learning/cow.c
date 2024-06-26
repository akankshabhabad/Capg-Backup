#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int shared_data = 10;
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Child process
        printf("Child process: PID = %d\n", getpid());
        printf("Child process: shared_data = %d\n", shared_data);
        shared_data = 20; // Modify shared data
        printf("Child process: modified shared_data = %d\n", shared_data);
        exit(EXIT_SUCCESS);
    } else {
        // Parent process
        printf("Parent process: PID = %d\n", getpid());
        printf("Parent process: shared_data = %d\n", shared_data);
        wait(NULL);
    }

    return 0;
}


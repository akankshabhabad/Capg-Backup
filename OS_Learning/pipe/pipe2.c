#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
    int fd[2]; // Array to hold the pipe file descriptors
    pid_t pid; // Variable to store the process ID
    char write_msg[] = "Hello, this is a message from parent to child!";
    char read_msg[100]; // Buffer to store the message read from the pipe

    // Create the pipe
    if (pipe(fd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    // Create a new process
    pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid > 0) {
        // Parent process
        close(fd[0]); // Close the read end of the pipe in the parent process

        // Write a message to the pipe
        write(fd[1], write_msg, sizeof(write_msg));
        close(fd[1]); // Close the write end of the pipe after writing

        // Wait for the child process to complete
        wait(NULL);
    } else {
        // Child process
        close(fd[1]); // Close the write end of the pipe in the child process

        // Read the message from the pipe
        read(fd[0], read_msg, sizeof(read_msg));
        close(fd[0]); // Close the read end of the pipe after reading

        // Print the message received from the parent process
        printf("Child received message: %s\n", read_msg);
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

// Signal handler function for SIGUSR1
void sigusr1_handler(int signum) {
    printf("Custom action triggered by SIGUSR1 signal\n");
    // Perform custom action for SIGUSR1
}

// Signal handler function for SIGINT
void sigint_handler(int signum) {
    printf("Caught SIGINT signal. Exiting...\n");
    exit(signum); // Exit the program with the signal number
}

// Signal handler function for SIGTERM
void sigterm_handler(int signum) {
    printf("Caught SIGTERM signal. Exiting...\n");
    exit(signum); // Exit the program with the signal number
}

int main() {
    // Set up signal handlers for SIGUSR1, SIGINT, and SIGTERM
    signal(SIGUSR1, sigusr1_handler);
    signal(SIGINT, sigint_handler);
    signal(SIGTERM, sigterm_handler);

    printf("Waiting for signals...\n");

    // Infinite loop to keep the program running
    while(1) {
        // Do some work or wait for input
    }

    return 0;
}


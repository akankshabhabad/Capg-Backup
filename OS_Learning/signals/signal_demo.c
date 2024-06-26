#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_sigterm(int signo) {
    printf("Received SIGTERM, exiting gracefully...\n");
	printf("Signal number of SIGTERM is: %d\n", signo);
    // Perform cleanup tasks here
    exit(0);
}

int main() {
    // Set up the SIGTERM signal handler
   // signal(15, handle_sigterm);
      signal(SIGTERM, handle_sigterm);

  
    printf("Running process with PID: %d\n", getpid());
    while (1)
	{
        printf("Process running...\n");
        sleep(1);
    }

    return 0;
}


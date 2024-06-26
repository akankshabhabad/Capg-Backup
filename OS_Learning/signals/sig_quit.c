#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void sigquit_handler(int signum) {
    printf("Process received SIGQUIT (%d). Terminating and generating core dump.\n", signum);
    // Perform cleanup and terminate
   
}

int main() {
    // Install signal handler for SIGQUIT
    signal(SIGQUIT, sigquit_handler); 

	// signal(SIGQUIT, SIG_IGN);

    printf("Process running. PID: %d\n", getpid());

    // Infinite loop to keep the program running
    while (1) {
		printf("\nHello All...");
        sleep(1);
    }

    return 0;
}


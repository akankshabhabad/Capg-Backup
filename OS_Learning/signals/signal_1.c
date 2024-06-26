#include <stdio.h>
#include <signal.h>

// Function prototype
void catch_sig(int sig_num);

int main(void) {
    // Setting up signal handlers
    signal(SIGTERM, catch_sig);
    signal(SIGINT, SIG_IGN);
    signal(SIGSEGV, SIG_DFL);

    // Program logic...
    
    return 0;
}

// Signal handler function
void catch_sig(int sig_num) {
    // Re-setting the signal handler
    signal(sig_num, catch_sig);
    // Printing the caught signal number
    printf("Catch-sig : %d\n", sig_num);
}

// Define SIG_DFL and SIG_IGN
//#define SIG_DFL ((void (*)(int))0)
//#define SIG_IGN ((void (*)(int))1)



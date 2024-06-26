#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void sigint_handler(int signum) {
    printf("SIGTSTOP signal received, with Signal number: %d\n", signum);
}

int main() {

   printf("PID is: %d\n", getpid());
   // signal(SIGSTOP, sigint_handler);
   // signal(SIGSTOP, SIG_DFL);
    signal(SIGSTOP, SIG_IGN);



   while(1) {
        printf("Helllllooooo\n");
        sleep(1);
    }


    return 0;
}

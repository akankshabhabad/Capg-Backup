#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void sigint_handler(int signum) {
    printf("SIGTSTP signal received, with Signal number: %d\n", signum);
}

int main() {

   printf("PID is: %d\n", getpid());
  // signal(SIGTSTP, sigint_handler);
   //signal(SIGTSTP, SIG_DFL);
   signal(SIGTSTP, SIG_IGN);



   while(1) {
        printf("Helllllooooo\n");
        sleep(1);
    }


    return 0;
}

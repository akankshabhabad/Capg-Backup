#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
 
void sigint_handler(int signum) {
    printf("Caught SIGINT signal (Ctrl+C)\n");
}
 
int main() {
 
   // signal(SIGINT, sigint_handler);
 
   // signal(SIGINT,SIG_DFL);
 
    signal(SIGINT, SIG_IGN);
 
    printf("Press Ctrl+C to trigger SIGINT signal...\n");
 
   while(1) {
        printf("Helloo All...\n");
        sleep(1);
    }
 
 
    return 0;
}

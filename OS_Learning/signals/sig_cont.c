#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void signal_handler1(int signum) 
{
printf("\nSIGTSTOP signal received, with Signal number: %d\n", signum);
}
void signal_handler2(int signum)
{
	printf("\nSIGCONT signal received, with Signal number: %d\n", signum);
}


int main() {

printf("PID is: %d\n", getpid());
signal(SIGSTOP, signal_handler1);
//signal(SIGSTOP, SIG_DFL);
signal(SIGCONT, signal_handler2);

//signal(SIGSTOP, SIG_IGN);
//signal(SIGCONT, SIG_IGN);
//We can't ignore SIGSTOP and SIGCONT signals

while(1) {
printf("Helllllooooo\n");
sleep(1);
}

return 0;


}

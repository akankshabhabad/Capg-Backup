#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include<stdlib.h>

void signal_handler(int signum)
{
	printf("SIGKILL(%d) is handled.", signum);
	exit(EXIT_FAILURE);
}

int main() {
    printf("This program cannot catch SIGKILL. It will be terminated immediately.\n");
	printf("\n PID of this process is %d\n", getpid());
	signal(SIGKILL, signal_handler);

    // Infinite loop to keep the program running
    while (1) {
        printf("\nHello world!");
        sleep(1);
    }

    return 0;
}


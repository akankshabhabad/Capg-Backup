#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int childPid = fork();

    if(childPid == -1){
        printf("Error creating a child process!\n");
        exit(-1);
    }

    if(childPid == 0){
        printf("\nChild: I am going to sleep for 2 seconds!\n");
        sleep(2);
        printf("\nChild: I have awoken!\n");
        printf("\nChild: I have the PID: %d, and my parent's PID: %d\n", getpid(), getppid());
        exit(0);

    }
    else{
        printf("\nParent: I have the PID: %d, and my child's PID: %d\n", getpid(), childPid);
        printf("\nParent: I am exitting!\n");
        exit(0);
    }
}

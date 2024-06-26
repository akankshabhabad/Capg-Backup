#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void myhandler(int signo) {
    printf("\n Signal Received \n");
    printf(" Signal Number = %d \n", signo);
    exit(1);
}

int main() {
    signal(SIGSEGV, myhandler);

    int x = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x); 
    printf("The value of x is %d \n", x);

    // Corrected pointer usage
    int *ptr = &x;
    *ptr = 42; // This is now safe
    printf("\nAfter updating by ptr ");
    printf("\nThe value pointed to by ptr is %d\n", *ptr);
	printf("\nThe value of x is %d\n",x);

    return 0;
}


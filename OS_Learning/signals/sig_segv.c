#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void myhandler(int signo) {
printf("\nSIGSEGV Signal Received \n");
printf(" Signal Number = %d \n", signo);
exit(1);
}

int main() {
//signal(SIGSEGV, myhandler);
//signal(SIGSEGV, SIG_DFL);
signal(SIGSEGV, SIG_IGN);
int *ptr = NULL;
*ptr = 42; // Dereferencing a null pointer to cause SIGSEGV

printf("This line will not be printed.\\n");

return 0;


}

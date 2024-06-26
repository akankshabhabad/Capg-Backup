#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void myhandler(int signo)
{
    printf("\n FPE Signal Received \n");
    printf(" Signal Number = %d \n", signo);
    exit(1);
}

int main()
{
   // signal(SIGFPE, myhandler);
  //  signal(SIGFPE, SIG_DFL);
    signal(SIGFPE, SIG_IGN);

    int x, y, res;
    printf("Enter the numerator : ");
    scanf("%d", &x);
    printf("Enter the denominator : ");
    scanf("%d", &y);
    res = x / y;

    printf("\n result = %d \n", res);

    return 0;
}


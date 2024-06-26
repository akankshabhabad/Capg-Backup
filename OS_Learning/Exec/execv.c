#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
    printf("PID of first process: %d\n", getpid());
//  char *args[] = {"Hello", "All", NULL};
//	execv("./execv2", args);
    char *args[] = { "./execv2", NULL};
	execv(args[0], args);
	printf("Back to first process");
	return 0;
}

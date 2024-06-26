#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
	printf("We are in second process\n");
	printf("PID of second process : %d\n", getpid());
	return 0;
}

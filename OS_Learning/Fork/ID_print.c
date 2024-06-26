#include<stdio.h>
#include<unistd.h>
int main(void)
{
	pid_t pid = fork();
	printf("%d\n", pid);
	printf("Hello, world!\n");
	printf("Bye!!!\n");
	return 0;
}


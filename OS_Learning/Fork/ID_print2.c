#include<stdio.h>
#include<unistd.h>
int main(void)
{
        fork();
        printf("Hello, world!\n");
        printf("Bye!!!\n");
		fork();
		pid_t pid = fork();
		printf("%d\n", pid);
        return 0;
}


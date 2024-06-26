#include<stdio.h>
#include<unistd.h>
int main(void)
{
	printf("Hello, world!\n");
	fork();
	fork();
	printf("Bye bye!!!\n");
	printf("Take care...\n");
	printf("***\n");
    return 0;
}

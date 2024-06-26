#include<stdio.h>
#include<unistd.h>
int main(void)
{
	fork();
	fork();
	printf("Hello, world!\n");   // 4 times printed
	return 0;
}

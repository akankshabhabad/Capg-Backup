#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int lower = atoi(argv[1]);
	int higher = atoi(argv[2]);

	for(int i = lower; i <= higher; i++)
	{
		printf("%d\n", i);
	}
}

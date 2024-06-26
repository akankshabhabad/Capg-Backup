#include<stdio.h>
int main(int argc, char *argv[])
{
	printf("Number of words: %d\n", argc - 1);

	int count = 0;
	for(int i = 1; i < argc; i++)
	{
		while(*argv[i] != '\0')
		{
			if(*argv[i] == 'a')
			{
				count++;
			}

			argv[i]++;
		}
	}

	printf("No of 'a' in your name: %d\n", count);

}

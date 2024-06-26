#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("Please provide at least one argument\n");
		exit(1);
	}

	int count = 0;
	for(int i = 1; i < argc; i++)
	{
		char *str = argv[i];
		while(*str != '\0')
		{
			if(*str == 'a' || *str == 'A')
			{
				count++;
			}
			str++;
		}
	}

	printf("Total occurances of 'a' in all strings: %d\n", count);
	return 0;
}

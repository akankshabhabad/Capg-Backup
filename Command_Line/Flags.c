#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	char ch;
    int c_count = 0;
	int w_count = 0;
	int l_count = 0;

	if(argc < 2)
	{
		printf("Please provide at least one arguments\n");
		exit(1);
	}

	FILE *fp = NULL;
	fp = fopen("Flags.c", "r");

	if(strcmp(argv[1], "-c")==0)
	{
		while((ch = fgetc(fp)) != EOF)
		{
			c_count++;
		}
	
		printf("Number of characters: %d\n", c_count);
	}

	else if(strcmp(argv[1], "-w")==0)
	{
		int in_word = 0;

		while((ch = fgetc(fp)) != EOF)
		{
			if(isspace(ch))
			{
				in_word = 0;
			}
			else if(!(in_word))
			{
				w_count++;
				in_word = 1;
			}
		}
		printf("Number of words: %d\n" ,w_count);
	}
	

	else if(strcmp(argv[1], "-l")==0)
	{
		while((ch = fgetc(fp)) != EOF)
		{
			if(ch == '\n')
			{
				l_count++;
			}
		}

		printf("Number of lines: %d\n", l_count);
	}
	
    return 0;
}

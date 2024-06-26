#include<stdio.h>
#include<string.h>

int isVowel(char ch);

int countVowels(const char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		if(isVowel(*str))
		{
			count++;
		}
		str++;
	}
	return count;
}

int isVowel(char ch)
{
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("Please enter at least one argument\n");
	}

	for(int i = 1;i < argc; i++)
	{
		int vowels = countVowels(argv[i]);
		printf("Number of vowels in '%s' : %d\n", argv[i], vowels);
	}
	return 0;
}

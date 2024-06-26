#include<stdio.h>
#include<string.h>
void removeSpaces(char String[]);
int main(void)
{
	char str[100];
	printf("Enter the string:");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	removeSpaces(str);
	printf("String after removing extra spaces: %s\n", str);

	return 0;

}

void removeSpaces(char str[])
{
	int i = 0;
	while(*(str + i) != '\0')
	{
		if(*(str + i) == ' ')
		{
			*(str + i) = *(str + i + 1 );
		}
		i++;
	}
	*(str + i) = '\0';
}

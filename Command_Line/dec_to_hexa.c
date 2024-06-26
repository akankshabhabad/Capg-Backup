#include<stdio.h>
#include<stdlib.h>

char* dec_to_hexa(int , char *);

int main(int argc, char *argv[])
{

	char* hexa = (char *)malloc(sizeof(char));
	for(int i = 1;i < argc; i++)
	{
	int num = atoi(argv[i]);
	dec_to_hexa(num, hexa);
	printf("%s ",hexa);
	}
	printf("\n");
}

char* dec_to_hexa(int num, char *hexa)
{
	int rem;
    char *ptr = hexa;
	while(num > 0)
	{
		rem = num % 16;
		if( rem < 10)
			*ptr = rem + '0';
		else
			*ptr = rem + 'A' - 10;
        
		ptr++;
		num /= 16;
		
	}

	char *start = hexa;
	char *end = ptr - 1;
	while(start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
    return hexa;
}


   
  


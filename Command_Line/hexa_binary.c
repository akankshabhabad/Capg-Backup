#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int hexa_to_decimal(char *);
int* decimal_to_binary(int, int* );

int main(int argc, char *argv[])
{
	int result;
	
   int binary[10];
	for(int i = 1; i < argc;i++)
	{
		result = hexa_to_decimal(argv[i]);
		printf("%d ", result); 
	
   //int* binary = (int*) malloc(10*sizeof(int));
	    decimal_to_binary(result, binary);
		printf("%ls ", binary);

	}

	return 0;
}

int hexa_to_decimal(char *str)
{
	int len , i ;
	len = strlen(str);
	i = len - 1;
	int num = 0;
	while(*str != '\0')
	{
		if((*str >= 'A' && *str <='F') || (*str >='a' && *str <= 'f'))
		
			*str = *str - 'A' + 10;
		else
		
			*str = *str - '0';

         num += ((*str) * pow(16, i));
	     i--;

		 str++;
	}

	return num;
}

int* decimal_to_binary(int num, int *binary)
{
	
	int rem = 0;
	int *ptr = binary;
	while(num > 0)
	{
		rem = num % 2;
        *ptr = rem;
		ptr++;
		num = num / 2;
    
	}
	int *start = binary;
    int *end = ptr - 1;
    while(start < end)
      {
          char temp = *start;
          *start = *end;
          *end = temp;
          start++;
          end--;
      }

	return binary;
}

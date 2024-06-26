#include<stdio.h>
#include<stdarg.h>
void sum(int, ...);

int main(void)
{
	sum(4, 10, 20, 30, 40);
	sum(5, 10, 20, 30, 40, 50);

	return 0;
  
}

void sum(int count, ...)
{
	int i, sum;
	sum = 0;
	va_list argp;
	va_start(argp, count);
	for(i = 0;i < count; i++)
	{
		sum += va_arg(argp, int); //only int and double values are passes
	}

	va_end(argp); //for cleanup
	printf("Addition : %d\n", sum);
}

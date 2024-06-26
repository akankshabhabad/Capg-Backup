#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
        if(argc != 3)
		{
			printf("Two arguments required\n");
			exit(1);
		}

		int n1 = atoi(argv[1]);
        int n2 = atoi(argv[2]);
        int sum;
		float div;
		sum = n1 + n2;
		div = n1 / n2;

		float num1 = atof(argv[1]);
		printf("\n%s is coverted to float : %f", argv[1],num1);
		printf("\nAddition : %d", sum);
		printf("\nDivision : %f\n", div);
		return 0;
}

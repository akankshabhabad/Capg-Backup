#include<stdio.h>
void swap(int* , int*);
int main(void)
{
    int num1,num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Before swapping:\n");
    printf("Num1: %d\n",num1);
    printf("Num2: %d\n",num2); 
    swap(&num1,&num2);
    printf("After swapping:\n");
    printf("Num1: %d\n",num1);
    printf("Num2: %d\n",num2);
    return 0;
}

void swap(int *n1,int *n2)
{
    *n1 = *n1 ^ *n2;
    *n2 = *n1 ^ *n2;
    *n1 = *n1 ^ *n2;
}

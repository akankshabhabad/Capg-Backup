#include<stdio.h>
int reverse(int , int);

int main(void)
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Original number: %d\n", num);
    int result= reverse(num,0);
    printf("Number after reverse: %d\n",result);

    return 0;
}

int reverse(int num, int reversenum)
{

 if(num == 0)
 {
     return reversenum;
 }
 else
 {
     return reverse(num/10, reversenum * 10 + (num % 10));
 }

}



#include<stdio.h>
void main()
{

int num,pos;
printf("Enter the numer:");
scanf("%d",&num);
printf("Enter the position:");
scanf("%d",&pos);
int pos_bit=(num>>pos) & 1;
printf("Bit at %d : %d",pos,pos_bit);

}


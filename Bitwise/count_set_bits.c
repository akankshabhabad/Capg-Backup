#include<stdio.h>
void main()
{ 
int num,count=0;
printf("Enter the number:");
scanf("%d",&num);
while(num>0)
{
if(((num) & 1)!= 0)
   {
        count++;
   }
num=num>>1;
}
printf("NO.OF SET BITS: %d",count);

}

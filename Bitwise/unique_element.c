#include<stdio.h>
int unique_element(int arr[],int n)
{
int i;
int xor=0;
for(i=0;i<n;i++)
{
xor=xor^arr[i];     //xor of same numbers get cancelled and unique number is stored in xor variable
}
return xor;
}



void main()
{
int arr[100],n;
printf("Enter the number of array elements:");
scanf("%d",&n);
printf("Enter the array elements:");
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
int res=unique_element(arr,n);
printf("Unique element : %d",res);
}

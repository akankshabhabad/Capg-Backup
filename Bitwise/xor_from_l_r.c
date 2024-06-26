#include<stdio.h>

int xor_between_range(int l,int r)
{
int i,j,ans=0;
for(i=l;i<=r;i++)
{
    ans=ans^i;
   
}
	return ans;
}


void main()
{
	int l,r;

	printf("Enter the value of l:");
	scanf("%d",&l);
	printf("Enter the value of r:");
	scanf("%d",&r);
	int res=xor_between_range(l,r);
	printf("Result: %d", res);
}

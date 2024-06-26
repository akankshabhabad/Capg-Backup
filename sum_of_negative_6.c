#include<stdio.h>
#define MAX_SIZE 100

void main()
{
    int arr[MAX_SIZE],n,i,sum=0;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i = 0 ; i < n ;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n ;i++)
    {
        if(arr[i] < 0)
        {
          sum += arr[i];
        }
    }
    
    printf("Sum of all negative number: %d\n",sum);

}

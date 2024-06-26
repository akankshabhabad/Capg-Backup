#include<stdio.h>
#define MAX_SIZE 100

void main()
{
    int arr[MAX_SIZE],n,i,j;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i = 0 ; i < n ;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0, j = 0; i < n ;i++)
    {
        if(arr[i] >= 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    printf("Array after deleting negative numbers:\n");
    for(i = 0; i < j; i++)
    {
        printf("%d\n",arr[i]);
    } 


}

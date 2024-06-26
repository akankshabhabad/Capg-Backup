#include<stdio.h>

void main()
{ 
    int arr[50],n,i,sum=0;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i = 0 ; i < n ;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n ;i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }

    printf("\nSum of even elements of array: %d\n", sum);


}

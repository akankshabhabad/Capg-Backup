#include<stdio.h>

int duplicate_num(int*,int);

void main()

{
    int arr[50],n,i,pos;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i = 0 ; i < n ;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int result= duplicate_num(arr,n);
    if(result == 1)
    {
        printf("Array contains a duplicate number\n");
    }
    else
    {
        printf("Array doesn't contain duplicate number\n");
    }
}

int duplicate_num(int *arr,int n)
    {
       int i,j;

       for(i = 0; i < n; i++)
       {
         for(j = i+1; j < n; j++)
         {
             if(arr[i] == arr[j])
             {
                 return 1;
             }
         }
       }
       return 0;
    }

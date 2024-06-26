
#include<stdio.h>
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
 
    printf("Enter the location from where you want to delete element: ");
    scanf("%d", &pos);

    for(i = pos-1; i < n ;i++)
    {
        arr[i] = arr[i+1];
    }

    printf("After deleting number at given location:\n");

    for(i = 0;i < n-1; i++)
    {
        printf("%d\n", arr[i]);
 
    }
}

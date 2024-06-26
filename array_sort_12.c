#include<stdio.h>
void main()
{

    int arr[50],n,i,j,temp;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i = 0 ; i < n ;i++)
    {
        scanf("%d", &arr[i]);
    }
   
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
          if(arr[i] > arr[j])
          {
              temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
          }

        }
    }

    printf("After inserting number at given location:\n");

    for(i = 0;i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

}

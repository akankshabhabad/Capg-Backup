#include<stdio.h>

void main()
{
    int arr[50],n,i,num,pos;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i = 0 ; i < n ;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to insert: ");
    scanf("%d" , &num); 
    printf("Enter the position where you want to insert: ");
    scanf("%d", &pos);

    for(i = 0; i < n ;i++)
    {
        if(i == pos-1)
        {
            arr[i] = num;
        }
    }

    printf("After inserting number at given location:");
    
    for(i = 0;i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

}

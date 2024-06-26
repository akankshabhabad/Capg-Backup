
#include<stdio.h>
void main()
{

    int arr[50],n,i,num,pos;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i = 0 ; i < n ;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to insert: ");
    scanf("%d" , &num);
    printf("Enter the location where you want to insert: ");
    scanf("%d", &pos);
    //Shift the elements to the right to make space for new element
    for(i = n; i >=pos ; i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[pos-1] = num;

    printf("After inserting number at given location:\n");

    for(i = 0;i < n + 1; i++)
    {
        printf("%d\n", arr[i]);
    }

}

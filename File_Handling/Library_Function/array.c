#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int arr[10], i, n;
    fp = fopen("array.txt", "w");
    if(fp == NULL)
    {
        printf("Error: cannot open file");
        exit(1);
    }

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("\nEnter array elements: ");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);
}

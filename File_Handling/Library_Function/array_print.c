#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int arr[10], i;
    fp = fopen("array.txt", "r");
    if(fp == NULL)
    {
        printf("Error: cannot open file");
        exit(1);
    }

    fread(arr, sizeof(int), 5, fp);
    printf("\nArray Elements are: ");
    for( i=0;i<5;i++)
    {
        printf("\n%d", arr[i]);
    }
    fclose(fp);
}

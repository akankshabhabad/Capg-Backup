#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp = NULL;
    fp = fopen("text3.txt", "r");
    if(fp == NULL)
    {
        perror("fopen() failed\n");
        exit(1);
    }

    char ch = fgetc(fp);
    printf("Character is %c", ch);

    fclose(fp);

}

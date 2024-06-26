#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("text.txt", "w+");
    if(fp == NULL)
    {
        perror("fopen() failed\n");
        exit(1);
    }

    printf("Enter the character: ");
    scanf("%c", &ch);

    fputc(ch, fp);

    fclose(fp);

}

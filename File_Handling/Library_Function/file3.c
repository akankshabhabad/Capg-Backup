#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    char str[50];
    int i;
    char ch='A';
    int d = 100;
    fp = fopen("text2.txt", "w+");
    if(fp == NULL)
    {
        perror("fopen() failed\n");
        exit(1);
    }

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';

    fprintf(fp, "%s %c %d", str, ch, d);

    fclose(fp);

}

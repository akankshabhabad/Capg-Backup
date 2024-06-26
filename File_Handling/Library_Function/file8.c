#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp = NULL;
    char str[50];
    fp = fopen("text4.txt", "a");
    if(fp == NULL)
    {
        perror("fopen() failed\n");
        exit(1);
    }

    printf("Enter the content you want to append: ");
    fgets(str, sizeof(str), stdin);

//    fprintf(fp, "\n%s", str);
     
    fputs(str, fp);
    printf("Successfully appended...");

    fclose(fp);

}

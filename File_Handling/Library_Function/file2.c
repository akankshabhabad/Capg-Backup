#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    char str[50];
    int i;
    fp = fopen("text1.txt", "w+");
    if(fp == NULL)
    {
        perror("fopen() failed\n");
        exit(1);
    }

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    fputs(str, fp);
    
 /*   for(i = 0;str[i]!= '\0';i++)
    {
        fputc(str[i], fp);
    }
*/
    fclose(fp);

}

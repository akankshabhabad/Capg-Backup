#include<string.h>
#include<stdio.h>
char* strtoken(char *str , const char *delim)
{
    char* token = strtok(str , delim);
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL , delim);
    }

}

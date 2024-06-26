#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverseString(char *str)
{
        char* start = str;
        char* end = str + strlen(str) -1;
        while(start < end)
        {
                char temp = *start;
                *start = *end;
                *end = temp;
                start++;
                end--;
        }
}

int main(int argc, char *argv[])
{
        if(argc < 2)
        {
                printf("One argument is must!\n");
                exit(1);
        }

        for(int i = argc - 1; i > 0; i--)
        {
                //reverseString(argv[i]);
        printf("%s ", argv[i]);
        }
        printf("\n");
        return 0;
}

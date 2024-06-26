#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 
int count_words(char *);
int count_chars(char *);
int count_lines(char *);
 
int main(int argc, char *argv[])
{
 
        if(argc < 3)
        {
                printf("Please provide at least two arguments\n");
                exit(1);
        }
        char *str = argv[2];
 
        if(strcmp(argv[1], "-c")==0)
        {
 
                printf("Number of characters: %d\n", count_chars(str));
        }
 
        else if(strcmp(argv[1], "-w")==0)
        {
                printf("Number of words: %d\n" ,count_words(str));
        }
 
 
        else if(strcmp(argv[1], "-l")==0)
        {
                printf("Number of lines: %d\n", count_lines(str));
        }
 
    return 0;
}
 
int count_words(char *fname)
{
    FILE *fp = fopen(fname, "a+");
    char ch;
    int count = 0;
    int word = 0;
    while((ch = fgetc(fp)) != EOF)
    {
        if(isspace(ch))
            word = 0;
        else if(!(word)){
            word = 1;
            count++;
        }
    }
    return count;
 
}
 
int count_lines(char *fname)
{
    FILE *fp = fopen(fname, "a+");
    char ch;
    int count = 0;
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == '\n')
            count++;
    }
    return count;
}
 
int count_chars(char *fname)
{
 
    FILE *fp = fopen(fname, "a+");
    char ch;
    int count = 0;
 
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch != '\n')
            count++;
    }
 
    return count;
}

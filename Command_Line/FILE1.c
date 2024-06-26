#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 
int count_words(FILE*);
int count_chars(FILE *);
int count_lines(FILE *);
 
int main(int argc, char *argv[])
{
 
        if(argc < 3)
        {
                printf("Please provide at least two arguments\n");
                exit(1);
        }
        FILE *fp =fopen(argv[2], "a+");
 
        if(strcmp(argv[1], "-c")==0)
        {
 
                printf("Number of characters: %d\n", count_chars(fp));
        }
 
        else if(strcmp(argv[1], "-w")==0)
        {
                printf("Number of words: %d\n" ,count_words(fp));
        }
 
 
        else if(strcmp(argv[1], "-l")==0)
        {
                printf("Number of lines: %d\n", count_lines(fp));
        }
 
    return 0;
}
 
int count_words(FILE *fp)
{
 
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
 
int count_lines(FILE *fp)
{

    char ch;
    int count = 0;
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == '\n')
            count++;
    }
    return count;
}
 
int count_chars(FILE *fp)
{
 
    char ch;
    int count = 0;
 
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch != '\n')
            count++;
    }
 
    return count;
}

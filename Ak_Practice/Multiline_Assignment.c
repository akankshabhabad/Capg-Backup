#include<stdio.h>
#define IN 1
#define OUT 0
int main(void)
{
    char ch;
    char input[500][500];
    int words = 0 , spaces = 0, characters = 0 , lines = 0;
    int state = OUT;
    while((ch = getchar())!= EOF)
    {
        ++characters;
       
        if(ch == '\n')
            ++lines;

        if(ch == ' ' || ch =='\t' || ch =='\n')
            state = OUT;
        else if(state == OUT)
        {
            state = IN;
            ++words;
        }

    }

    printf("\nCharacters: %d" , characters);
    printf("\nWords: %d" , words);
    printf("\nLines: %d" , lines); 
    return 0;

}

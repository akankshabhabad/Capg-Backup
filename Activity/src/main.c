#include "../include/hdr.h"

int main(void)
{
   
    FILE *file;
    char ch;

    file = fopen("data.txt" , "r")
    if(file == NULL)
    {
        printf("File does not open...");
        return 1;
    }
    printf("No of characters: %d\n" , countCharacters(file));
    printf("No of words: %d\n" , countWords(file));
    printf("No of lines: %d\n" , countLines(file));
    fclose(file);
    return 0;

}

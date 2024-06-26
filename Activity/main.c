#include "hdr.h"

int main(void)
{
    char str[SIZE];
    printf("Enter the string: ");
    fgets(str , sizeof(str) , stdin);
    str[strcspn(str , "\n")] = '\0';
    printf("No of characters: %d\n" , countCharacters(str));
    printf("No of words: %d\n" , countWords(str));
    printf("No of lines: %d\n" , countLines(str));

    return 0;

}

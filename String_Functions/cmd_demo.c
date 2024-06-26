#include<stdio.h>
void main(int argc , char *argv[])
{
    printf("No of words in your name : %d\n", argc - 1);
    int count = 0;
    for(int i = 1; i < argc ; i++)    //Start from second argument because first is program name and it goes till the last word of argument
    {
        while(*argv[i] != '\0')    // It iterates each string till '\0'
        {
            if(*argv[i] == 'a')    // if character is 'a' 
            {
                count++;
            }
            argv[i]++;      // increment for checking each character
        }
      
    }
    printf("No of 'a' in your name: %d\n", count);

}

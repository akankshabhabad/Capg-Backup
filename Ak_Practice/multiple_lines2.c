#include<stdio.h>
int main(void)
{
    char ch;
    char input[500][500];
    int i = 0 , j = 0;
    printf("\nEnter the input(Press Ctrl + D for stop typing) :\n");
    while((ch = getchar())!= EOF)
    {
        if( ch == '\n')
        {
            input[i][j] = '\0';
            i++;
            j = 0;
        }
        else
        {
            input[i][j] = ch;
            j++;
        }
    }

    printf("\n\nYou entered following string :\n");
    for(int k = 0; k <= i; k++)
    {
        printf("%s\n" , input[k]);
    }
    return 0;

}

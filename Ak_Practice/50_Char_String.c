#include<stdio.h>
int main(void)
{
    char ch;
    char input[500][500];
    int count = 0;
    int i = 0, j = 0;
    while((ch = getchar())!= EOF)
    {
        if(ch == '\n')
        {
            input[i][j] = '\0';
       
            if(j >= 50)
            {
                ++count;
                printf("\nLine contains more than 50 characters : %s\n", input[i]);
            }
            i++;
            j = 0;
        }

        else
        {
            input[i][j] = ch;
            j++;
        }
    }

    printf("\nNo of lines which contains more than 50 characters: %d\n" , count);

    return 0;

}

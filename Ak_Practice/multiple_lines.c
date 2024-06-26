#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char c;
    char input[200][100];
    int i , j;
    int n1 = 0;
    printf("\nEnter input lines:\n");
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
         {
            ++n1;
            if(n1 == 2) 
                break;
            
            i++;
            j = 0;
         }
        else
        {   
            input[i][j++] = c;
            n1 = 0;
        }
    }

    input[i][j] = '\0';

    printf("Input lines are:\n");
    for(int k = 0; k <= i; k++)
    {
        printf("%s\n",input[k]);
    }

    printf("\n%c\n" , input[2][1]);
    return 0;

}

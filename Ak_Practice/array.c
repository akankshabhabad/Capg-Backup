#include <stdio.h>

int main(void)
{
    char arr[2][2] = {{"ab"},
                      {"cd"}};
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            printf("%c\n", arr[i][j]);
    }
    printf("%s\n", arr);
    
    printf("%s\n", arr[0]);
    printf("%s\n", arr[1]);
    
    return 0;         
}

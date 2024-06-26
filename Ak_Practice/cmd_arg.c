#include<stdio.h>
#include<stdlib.h>
int main( int argc , char *argv[])

{
    printf("You have enetered %d arguments \n", argc);
/*    for(int i = 0 ; i < argc ; i++)
    {
        printf("%s\n" , argv[i]);
    }*/

    int num1 = atoi(argv[1]);  // string to integer
    int num2 = atoi(argv[2]);

    printf("Addition : %d\n" , (num1 + num2));

    
    return 0;
}

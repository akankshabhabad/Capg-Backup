#include<stdio.h>
void main()
{
    char str[50];
    int i;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    printf("\nInput String: %s\n", str);
 
    /*
    for(i = 0; str[i]!='\0' ;i++)
    {
        if(str[i] == 'a')
        {
            str[i] = 'k';
        }
    }

    printf("After replacing a with k: %s", str);
    
    */
    i=0;
    while(*(str + i)!='\0')
    {
        if(*(str + i) == 'a')
        {
            *(str + i) = 'k';
        }
        i++;

    }


     printf("After replacing a with k: %s", str);
   
}

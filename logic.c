#include<stdio.h>
void main()
{
    int x=0;
    if(++x, x=x+2,x>5)
    {
        printf("Hello\n");
}
    else
    {
        printf("Hi\n");
}
    printf("x= %d\n",x);
}


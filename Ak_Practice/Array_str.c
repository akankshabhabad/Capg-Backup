#include<stdio.h>
void main()
{
    char a[][4] = {{'a' , 'b' , 'c' ,'d'},
        {'e' , 'f' , 'g' , 'h'}, 
        {'i' , 'j' , 'k' ,'l'}};
    char *p1[19];
    char *p2[] = {"Head" ,"art" , "sharp"};
    printf("%s\n", a[0]);
    printf("%s\n", a[1]);
    printf("%p\n", &a[0]);
    printf("%p\n",&a[1]);
    printf("%ld\n", sizeof(p1));
    
    printf("%ld\n", sizeof(p2));

    printf("\n");
//    printf("%ld\n",&(a[0] + 1));

    printf("%p\n" , &a);
}

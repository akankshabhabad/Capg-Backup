#include<stdio.h>
int main()
{

    static const int var1;
    const static int  var;
    int static const var3;
//    static int num=3;
    var static const res;

    printf("%d\n", num);
    if(--num)
    {
        printf("%d\n",num);
        main();
        printf("%d\n",num);
    }
    return 0;
}

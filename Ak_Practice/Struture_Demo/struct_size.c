#include <stdio.h>
struct stud{
    double a;
    //short s;
    char ch[5];
    int i;
};

int main() {
    printf("Size of struct: %ld\n", sizeof(struct stud));
    return 0;
}

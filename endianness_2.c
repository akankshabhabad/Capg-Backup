#include <stdio.h>

int main() {
    unsigned int num = 1;
    int *c = &num;

    if (*c == 1) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }

    return 0;
}


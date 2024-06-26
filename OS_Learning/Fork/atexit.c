#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
void cleanup1() {
    printf("Cleanup 1\n");
}

void cleanup2() {
    printf("Cleanup 2\n");
}

int main() {
    // Register cleanup functions
    atexit(cleanup1);           // It prints functions output in reverse order
    atexit(cleanup2);

    printf("Main function\n");

    return 0;
}

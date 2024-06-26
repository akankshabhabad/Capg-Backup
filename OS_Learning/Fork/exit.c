#include <stdio.h>
#include <stdlib.h>
// #include<unistd.h>
void cleanup1() {
    printf("Cleanup 1\n");
}

void cleanup2() {
    printf("Cleanup 2\n");
}

int main() {
    // Register cleanup functions
    atexit(cleanup1);           // It prints functions output in reverse order Cleanup 2 and then Clean up 1
    atexit(cleanup2);

    printf("Main function\n");

    exit(0);    // It calls atexit() funtion for cleanup operation
        printf("End...");
    return 0;
}

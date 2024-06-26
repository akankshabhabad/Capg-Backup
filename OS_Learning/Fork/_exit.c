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
    atexit(cleanup1);           
    atexit(cleanup2);

    printf("Main function\n");   

    _exit(0);   // It does not execute atexit() function because it doesn't perform cleaup operation
	printf("End...");    
    return 0;
}


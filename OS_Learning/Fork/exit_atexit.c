#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
void cleanup_function1() {
    printf("Cleanup function 1\n");
}
 
void cleanup_function2() {
    printf("Cleanup function 2\n");
}
 
void cleanup_function3() {
    printf("Cleanup function 3\n");
    atexit(cleanup_function2);
}
 
int main() {
    atexit(cleanup_function1);
    atexit(cleanup_function2);
    atexit(cleanup_function3);
 
    printf("Before exit()\n");
    //exit(0); 
    //_exit(0); 
    printf("After exit()\n");
 
    //return 0;
}

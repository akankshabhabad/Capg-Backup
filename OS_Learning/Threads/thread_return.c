#include <stdio.h>
#include <stdlib.h> // Needed for dynamic memory allocation
#include <pthread.h>

void *thread_function(void *arg) {
    int *result = (int *)malloc(sizeof(int)); // Allocate memory for the result
    *result = 42; // Set the result value
    pthread_exit(result); // Return the result
}

int main() {
    pthread_t tid;
    void *thread_result;

    pthread_create(&tid, NULL, thread_function, NULL);
    pthread_join(tid, &thread_result);

    int *result_ptr = (int *)thread_result;
    printf("Result from thread: %d\n", *result_ptr);

    // Free the dynamically allocated memory
    free(result_ptr);

    return 0;
}



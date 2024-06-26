#include <stdio.h>
#include <pthread.h>
#include<stdlib.h>


// Function to be executed by the thread
void *thread_function(void *arg) {
    int *input = (int *)arg; // Cast the argument to the expected type
    int *result = malloc(sizeof(int)); // Allocate memory to store the result

    // Perform some computation using the input
    *result = (*input) * 2;

    pthread_exit((void *)result); // Return the result
}

int main() {
    pthread_t tid;
    int input = 5; // Input argument for the thread
    int *thread_result; // Pointer to store the result returned by the thread

    // Create the thread and pass the input argument
    pthread_create(&tid, NULL, thread_function, (void *)&input);

    // Wait for the thread to finish and get the result
    pthread_join(tid, (void **)&thread_result);

    // Print the result returned by the thread
    printf("Result from thread: %d\n", *thread_result);

    // Free the memory allocated for the result
    free(thread_result);

    return 0;
}


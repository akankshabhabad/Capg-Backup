#include <stdio.h>
#include <pthread.h>

int global_counter = 0;

void *increment(void *arg) {
   
        global_counter++;
  
    pthread_exit(NULL);
}

int main() {
    pthread_t thread1, thread2;

    // Create two threads
    pthread_create(&thread1, NULL, increment, NULL);
    pthread_create(&thread2, NULL, increment, NULL);

    // Wait for both threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Print the final value of the counter
    printf("Final counter value: %d\n", global_counter);

    return 0;
}


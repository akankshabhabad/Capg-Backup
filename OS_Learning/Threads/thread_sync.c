#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t mutex; // Mutex for synchronization
int i, j;

void *thread_fun(void *arg);

int main() {
    pthread_t tid;

    // Initialize mutex
    pthread_mutex_init(&mutex, NULL);

    // Create thread
    pthread_create(&tid, NULL, thread_fun, NULL);
    
    pthread_join(tid, NULL);

    // Main thread execution
    pthread_mutex_lock(&mutex); // Lock mutex before accessing shared variable j
    printf("Inside main program\n");
    for (j = 20; j < 25; j++) {
        printf("%d\n", j);
        sleep(1);
    }
    pthread_mutex_unlock(&mutex); // Unlock mutex after finishing access to shared variable j

    // Wait for thread to finish
   // pthread_join(tid, NULL);

    // Destroy mutex
    pthread_mutex_destroy(&mutex);

    return 0;
}

void *thread_fun(void *arg) {
    // Thread execution
    pthread_mutex_lock(&mutex); // Lock mutex before accessing shared variable i
    printf("Inside Thread\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
        sleep(1);
    }
    pthread_mutex_unlock(&mutex); // Unlock mutex after finishing access to shared variable i

    pthread_exit(NULL);
}


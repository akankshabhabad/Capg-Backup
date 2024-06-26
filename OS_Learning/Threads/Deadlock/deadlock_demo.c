#include <stdio.h>
#include <pthread.h>
#include<unistd.h>

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;

void *thread1_function(void *arg) {
    pthread_mutex_lock(&mutex1); // Lock mutex1
    printf("Thread 1 acquired mutex1\n");
    sleep(1); // Introduce a delay to make the deadlock more likely
    printf("Thread 1 waiting for mutex2...\n");
    pthread_mutex_lock(&mutex2); // Attempt to lock mutex2

    // Critical section for thread 1
    printf("Thread 1 critical section\n");

    pthread_mutex_unlock(&mutex2); // Unlock mutex2
    pthread_mutex_unlock(&mutex1); // Unlock mutex1

    pthread_exit(NULL);
}

void *thread2_function(void *arg) {
    pthread_mutex_lock(&mutex2); // Lock mutex2
    printf("Thread 2 acquired mutex2\n");
    sleep(1); // Introduce a delay to make the deadlock more likely
    printf("Thread 2 waiting for mutex1...\n");
    pthread_mutex_lock(&mutex1); // Attempt to lock mutex1

    // Critical section for thread 2
    printf("Thread 2 critical section\n");

    pthread_mutex_unlock(&mutex1); // Unlock mutex1
    pthread_mutex_unlock(&mutex2); // Unlock mutex2

    pthread_exit(NULL);
}

int main() {
    pthread_t thread1, thread2;

    // Create threads
    pthread_create(&thread1, NULL, thread1_function, NULL);
    pthread_create(&thread2, NULL, thread2_function, NULL);

    // Wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}


#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
 
#define MAX_RESOURCES 5
 
sem_t sem;
 
int available_resources = MAX_RESOURCES;
 
void* thread_fun(void* arg) {
    int requested_resources = *(int*)arg;
 
    sem_wait(&sem); // Wait for resources to be available
 
    // Critical section (accessing shared resource)
    if (available_resources >= requested_resources) {
        available_resources -= requested_resources;
        printf("Thread: Acquired %d resources, %d remaining\n", requested_resources, available_resources);
    }
	 else
	{
        printf("Thread: Not enough resources available\n");
    }
 
   sem_post(&sem); // Release the semaphore
    return NULL;
}
 
int main() {
    pthread_t thread1, thread2;
    int req1 = 2, req2 = 4;
 
  sem_init(&sem, 0, 1); // Initialize the semaphore with initial value 1
 
    pthread_create(&thread1, NULL, thread_fun, &req1);
    pthread_create(&thread2, NULL, thread_fun, &req2);
 
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
 
    sem_destroy(&sem); // Destroy the semaphore
    return 0;
}

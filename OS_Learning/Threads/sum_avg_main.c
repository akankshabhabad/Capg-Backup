#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
 
int sum = 0;
float avg = 0;
pthread_mutex_t mutex;
sem_t sem1;
 
void *thread_sum(void *arg)
{
    int count = *(int *)arg;
    for (int i = 1; i <= count; i++) {
        pthread_mutex_lock(&mutex);
        sum += i;
        pthread_mutex_unlock(&mutex);
    }
    sem_post(&sem1); // Signal that sum calculation is finished
 
    pthread_exit(NULL);
}
 
void *thread_avg(void *arg)
{
    sem_wait(&sem1); // Wait for sum calculation to finish
 
    int count = *(int *)arg;
    avg = (float)sum / count;
    pthread_exit(NULL);
}
 
int main(void)
{
    int count = 1024;
    pthread_t s_thread, a_thread;
 
    pthread_mutex_init(&mutex, NULL);
    sem_init(&sem1, 0, 0); // Initialize semaphore
 
    pthread_create(&s_thread, NULL, thread_sum, (void *)&count);
    pthread_create(&a_thread, NULL, thread_avg, (void *)&count);
 
    pthread_join(s_thread, NULL);
    pthread_join(a_thread, NULL);
 
    pthread_mutex_destroy(&mutex);
    sem_destroy(&sem1); // Destroy semaphore
 
    printf("Sum: %d\n", sum);
    printf("Avg: %f\n", avg);
    return 0;
}

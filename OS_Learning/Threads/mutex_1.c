#include<stdio.h>
#include<fcntl.h>
#include<semaphore.h>
#include<pthread.h>
pthread_mutex_t mutex;

void *even(void *arg)
{
        int count = *(int*)arg;

        pthread_mutex_lock(&mutex);
        for(int i = 2; i<=count;i+=2)
        {
                printf("Even thread: %d\n",i);
		}
                pthread_mutex_unlock(&mutex);
                pthread_exit(NULL);

}

void *odd(void *arg)
{
        int count = *(int *)arg;
        for(int i = 1;i<=count; i+=2)
        {
                pthread_mutex_lock(&mutex);
                printf("Odd thread: %d\n",i);
                pthread_mutex_unlock(&mutex);
        }
        pthread_exit(NULL);
}

int main(void)
{
        pthread_t even_thread, odd_thread;
        pthread_mutex_init(&mutex, NULL);
    int count = 10;
        pthread_create(&even_thread, NULL,even, &count);
        pthread_create(&odd_thread, NULL, odd, &count);

        pthread_join(even_thread, NULL);
        pthread_join(odd_thread, NULL);

        pthread_mutex_destroy(&mutex);

        return 0;
}

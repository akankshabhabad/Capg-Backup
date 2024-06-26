#include<stdio.h>
#include<fcntl.h>
#include<semaphore.h>
#include<pthread.h>
sem_t sem;

void *even(void *arg)
{
	int count = *(int*)arg;
	for(int i = 0; i<=count;i+=2)
	{
		sem_wait(&sem);
		printf("Even thread: %d\n",i);
		sem_post(&sem);
	}
		pthread_exit(NULL);
	
}

void *odd(void *arg)
{
	int count = *(int *)arg;
	for(int i = 1;i<=count; i+=2)
	{
		sem_wait(&sem);
		printf("Odd thread: %d\n",i);
		sem_post(&sem);
	
	}
	pthread_exit(NULL);
}

int main(void)
{
	pthread_t even_thread, odd_thread;
	sem_init(&sem, 0,1);
    int count = 10;
	pthread_create(&even_thread, NULL,even, &count);
	pthread_create(&odd_thread, NULL, odd, &count);

	pthread_join(even_thread, NULL);
	pthread_join(odd_thread, NULL);

	sem_destroy(&sem);

	return 0;
}


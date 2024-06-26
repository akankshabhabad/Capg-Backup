#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_mutex_t mutex1;
pthread_mutex_t mutex2;

void* thread1(void* arg)
{
	pthread_mutex_lock(&mutex1);
	printf("Thread 1 locked mutex1\n");

	sleep(1);

	pthread_mutex_lock(&mutex2);
	printf("Thread 1 locked mutex2\n");

	pthread_mutex_unlock(&mutex2);
	pthread_mutex_unlock(&mutex1);
}

void *thread2(void *arg)
{
	pthread_mutex_lock(&mutex2);
	printf("Thread 2 locked mutex2\n");

	sleep(1);

	pthread_mutex_lock(&mutex1);
	printf("Thread2 locked mutex 1\n");
	
	pthread_mutex_unlock(&mutex1);
	pthread_mutex_unlock(&mutex2);
}

int main()
{
	pthread_t t1,t2;
	pthread_create(&t1, NULL, thread1, NULL);
	pthread_create(&t2, NULL, thread2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	return 0;
}


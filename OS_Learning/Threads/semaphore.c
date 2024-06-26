#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>

int shared = 10;
sem_t sem;

void *increment(void *arg)
{
	sem_wait(&sem);  
	shared++;
	printf("Increment: Shared variable = %d\n", shared);

	sem_post(&sem);
   
    pthread_exit(NULL);

}

void *decrement(void *arg)
{
	sem_wait(&sem);
	shared--;
	printf("Decrement: Shared variable = %d\n", shared);

	sem_post(&sem);

	pthread_exit(NULL);

}

int main(void)
{
	pthread_t th1;
	pthread_t th2;

    sem_init(&sem, 0, 1);

	pthread_create(&th1, NULL, &increment, NULL);
	pthread_create(&th2, NULL, &decrement, NULL);

	pthread_join(th1, NULL);
	pthread_join(th2, NULL);

	sem_destroy(&sem);

	return 0;
}

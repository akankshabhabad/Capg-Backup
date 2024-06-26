#include<stdio.h>
#include<pthread.h>

pthread_mutex_t mutex;
int num = 10;

void* increment(void* arg)
{
	pthread_mutex_lock(&mutex);
	num++;
	printf("Number after increments : %d\n", num);
	pthread_mutex_unlock(&mutex);
}

void* decrement(void* arg)
{
	pthread_mutex_lock(&mutex);
	num--;
	printf("Number after decrement : %d\n", num);
	pthread_mutex_unlock(&mutex);
}

int main(void)
{
	pthread_t th1, th2;
	pthread_mutex_init(&mutex, NULL);

	pthread_create(&th1, NULL, increment, NULL);
	pthread_create(&th2, NULL, decrement, NULL);
	pthread_join(th1, NULL);
	pthread_join(th2, NULL);

    printf("After executing both threads: %d\n", num);
	pthread_mutex_destroy(&mutex);
	return 0;
}

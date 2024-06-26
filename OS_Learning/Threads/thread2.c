#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

void *thread_sum(void *arg)
{
	int *sum;
	sum = malloc(sizeof(int));
	if(sum == NULL)
	{
		printf("Memory allocation failed\n");
		pthread_exit(NULL);
	}
	*sum = 0;
	int i;
	printf("Thread Started...\n");
	for(i = 0;i<1024; i++)
		*sum += i;

	printf("thread exit\n");
	pthread_exit(sum);
}


int main()
{
	pthread_t tid;
	int status;
	void *res;
	printf("Main process started\n");
	status = pthread_create(&tid, NULL, &thread_sum, NULL);
	if(status != 0)
	{
		perror("Thread not created\n");
		exit(1);
	}

	pthread_join(tid, &res);

	printf("Main process: sum = %d\n", *((int*) res));
	printf("Main process exiting\n");

	return 0;
}

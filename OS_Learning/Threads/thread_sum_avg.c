#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<errno.h>

int *sum;
int *avg;

void *thread_sum(void *arg)
{
	sum = malloc(sizeof(int));
	*sum = 0;
	printf("Thread (Sum) started\n");
	printf("Thread ID: %ld\n", pthread_self());
	for(int i = 0; i<=1024; i++)
		*sum +=i;
	printf("Thread (Sum) exited\n");
	pthread_exit(sum);
}
void *thread_avg(void *arg)
{
    avg = malloc(sizeof(int));
    *avg = 0;
	printf("Thread (Avg) started\n");
	printf("Thread ID: %ld\n", pthread_self());
	*avg = *sum/1024;
	printf("Thread (Avg) exited\n");
	pthread_exit(avg);
}

#define handle_error_en(en, msg) \
      do { errno = en;perror(msg);exit(EXIT_FAILURE);} while(0);

int main()
{
	pthread_t tid1;
	pthread_t tid2;
	int status1, status2;
	void *res1;
	void *res2;
	printf("Main process started\n");
	status1 = pthread_create(&tid1, NULL, &thread_sum, NULL);   
	if(status1 != 0)
	{
		handle_error_en(status1, "pthread_create");
	}

	status2 = pthread_create(&tid2, NULL, &thread_avg, NULL);    
	if(status2 != 0)
	{
		handle_error_en(status2, "pthread_create");
	}

	pthread_join(tid1, &res1);
	pthread_join(tid2, &res2);
	printf("Main process: sum = %d\n", *((int *)res1));
	printf("Main process: Average = %d\n", *((int *)res2));
	printf("Main process exiting\n");

	return 0;
}




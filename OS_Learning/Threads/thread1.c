#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_fun(void *arg);

int i, j;

int main()
{
	pthread_t tid;
	pthread_create(&tid, NULL, thread_fun, NULL);  //Thread is created & jump to function
	pthread_join(tid, NULL);  //process waits for thread to finish

	printf("Inside main program\n");

	for(j=20; j<25; j++)
	{
		printf("%d\n", j);
        sleep(1);
	}

}

void *thread_fun(void *arg)
{
	printf("Inside Thread\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n", i);
		sleep(1);
	}

}
	


#include<stdio.h>
#include<pthread.h>

pthread_mutex_t mutex;
int shared = 10;

void* thread_fun(void* arg)
{
      //  pthread_mutex_lock(&mutex); //lock the mutex
        shared++;
        printf("Thread: Shared variable = %d\n", shared);
      //  pthread_mutex_unlock(&mutex);
       
}

int main()
{
        pthread_t th1, th2;
      //  pthread_mutex_init(&mutex, NULL); //initialize the mutex

        pthread_create(&th1, NULL, thread_fun, NULL);
        pthread_create(&th2, NULL, thread_fun, NULL);

        pthread_join(th1, NULL);
        pthread_join(th2, NULL);

      //  pthread_mutex_destroy(&mutex);  //destroy the mutex

        return 0;
}


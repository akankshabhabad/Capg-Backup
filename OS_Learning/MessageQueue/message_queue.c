#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>
 
#define QUEUE_NAME "/my_queue"
#define MAX_MSG_SIZE 1024
 
 
int main()
{
    mqd_t mq;
    struct mq_attr attr;
    char buffer[MAX_MSG_SIZE];
    unsigned int prio;
 
    attr.mq_flags = 0;
    attr.mq_maxmsg = 10;
    attr.mq_msgsize = MAX_MSG_SIZE;
    attr.mq_curmsgs = 0;
 
 
    mq = mq_open(QUEUE_NAME, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR, &attr);
    if (mq == (mqd_t)-1)
    {
        perror("mq_open");
        exit(EXIT_FAILURE);
    }
 
    printf("Message queue created/opened successfully.\n");
 
    strcpy(buffer, "Hello from sender");
    prio = 1;
    if(mq_send(mq, buffer, strlen(buffer) + 1,prio) == -1)
    {
        perror("mq_send");
        exit(EXIT_FAILURE);
    }
 
    printf("Message sent to the queue.\n");
 
    if(mq_receive(mq, buffer, MAX_MSG_SIZE, &prio) == -1)
    {
        perror("mq_recieve");
        exit(EXIT_FAILURE);
    }
 
    printf("Received message from the queue :%s\n",buffer);
 
    if(mq_close(mq) == -1)
    {
        perror("mq_close");
        exit(EXIT_FAILURE);
    }
 
    printf("Message queue closed.\n");
 
    if(mq_unlink(QUEUE_NAME) == -1)
    {
        perror("mq_unlink");
        exit(EXIT_FAILURE);
    }
 
    printf("Message queue unlinked.\n");
 
    return 0;
}

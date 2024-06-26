/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#define QUEUE_NAME "/my_mq"
#define MAX_SIZE 256

int main() {
    mqd_t mqd;
    char buffer[MAX_SIZE];
    unsigned int priority;

    // Open the message queue
    mqd = mq_open(QUEUE_NAME, O_CREAT | O_RDONLY, 0644, NULL);
    if (mqd == (mqd_t) -1) {
        perror("mq_open");
        exit(EXIT_FAILURE);
    }

    // Receive messages from the queue
    for (int i = 0; i < 3; i++) {
        if (mq_receive(mqd, buffer, MAX_SIZE, &priority) == -1) {
            perror("mq_receive");
            exit(EXIT_FAILURE);
        }
        printf("Message received: %s with priority %u\n", buffer, priority);
    }

    // Close the message queue
    if (mq_close(mqd) == -1) {
        perror("mq_close");
        exit(EXIT_FAILURE);
    }

    // Unlink the message queue
    if (mq_unlink(QUEUE_NAME) == -1) {
        perror("mq_unlink");
        exit(EXIT_FAILURE);
    }

    return 0;
} 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#define QUEUE_NAME "/my_mq"

int main() 
{
    mqd_t mqd;
    struct mq_attr attr;
    unsigned int priority;
    char *buffer;

    // Open the message queue
    mqd = mq_open(QUEUE_NAME, O_CREAT | O_RDONLY, 0644, NULL);
    if (mqd == (mqd_t) -1) {
        perror("mq_open");
        exit(EXIT_FAILURE);
    }

    // Allocate buffer based on the maximum message size
    buffer = (char *)malloc(attr.mq_msgsize);
    if (buffer == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    // Receive messages from the queue
    for (int i = 0; i < 3; i++) {
        if (mq_receive(mqd, buffer, attr.mq_msgsize, &priority) == -1) {
            perror("mq_receive");
            free(buffer);
            exit(EXIT_FAILURE);
        }
        printf("Message received: %s with priority %u\n", buffer, priority);
    }

    free(buffer);
    if (mq_close(mqd) == -1) {
        perror("mq_close");
        exit(EXIT_FAILURE);
    }

    // Unlink the message queue
    if (mq_unlink(QUEUE_NAME) == -1) {
        perror("mq_unlink");
        exit(EXIT_FAILURE);
    }

    return 0;
}



/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#define QUEUE_NAME "/my_mq"
#define MAX_SIZE 256

int main() {
    mqd_t mqd;
    char buffer[MAX_SIZE];
    unsigned int priority;
    struct mq_attr attr;

    // Open the message queue
    mqd = mq_open(QUEUE_NAME, O_CREAT | O_RDONLY, 0644, NULL);
    if (mqd == (mqd_t) -1) {
        perror("mq_open");
        exit(EXIT_FAILURE);
    }

    // Get the attributes of the queue to ensure buffer size is sufficient
    if (mq_getattr(mqd, &attr) == -1) {
        perror("mq_getattr");
        exit(EXIT_FAILURE);
    }

    // Ensure buffer size is at least as large as the maximum message size
    if (MAX_SIZE < attr.mq_msgsize) {
        fprintf(stderr, "Buffer size is too small. Max message size: %ld\n", attr.mq_msgsize);
        exit(EXIT_FAILURE);
    }

    // Receive messages from the queue
    for (int i = 0; i < 3; i++) {
        if (mq_receive(mqd, buffer, MAX_SIZE, &priority) == -1) {
            perror("mq_receive");
            exit(EXIT_FAILURE);
        }
        printf("Message received: %s with priority %u\n", buffer, priority);
    }

    // Close the message queue
    if (mq_close(mqd) == -1) {
        perror("mq_close");
        exit(EXIT_FAILURE);
    }

    // Unlink the message queue
    if (mq_unlink(QUEUE_NAME) == -1) {
        perror("mq_unlink");
        exit(EXIT_FAILURE);
    }

    return 0;
}
*/

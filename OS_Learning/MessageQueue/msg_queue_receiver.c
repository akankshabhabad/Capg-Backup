#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#define QUEUE_NAME "/my_mq22"
#define MAX_SIZE 256

int main()
{
    mqd_t mqd;
    char buffer[MAX_SIZE];
	struct mq_attr attr;

    mqd = mq_open(QUEUE_NAME, O_RDONLY);
    if (mqd == -1) {
        perror("mq_open");
        exit(EXIT_FAILURE);
    }

    if (mq_receive(mqd, buffer, MAX_SIZE, NULL) == -1) {
        perror("mq_receive");
        exit(EXIT_FAILURE);
    }

    printf("Received message: %s\n", buffer);

    if (mq_close(mqd) == -1) {
        perror("mq_close");
        exit(EXIT_FAILURE);
    }

    if (mq_unlink(QUEUE_NAME) == -1) {
        perror("mq_unlink");
        exit(EXIT_FAILURE);
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#define QUEUE_NAME "/my_mq22"
#define MAX_SIZE 256

int main() {
    mqd_t mqd;
    char msg[MAX_SIZE];
	struct mq_attr attr;

    // Set message queue attributes
    attr.mq_flags = 0;
    attr.mq_maxmsg = 10;
    attr.mq_msgsize = MAX_SIZE;
    attr.mq_curmsgs = 0;


    mqd = mq_open(QUEUE_NAME, O_CREAT | O_WRONLY, 0644, &attr);
    if (mqd == -1) {
        perror("mq_open");
        exit(EXIT_FAILURE);
    }

	printf("Enter the message which you want to send: ");
	fgets(msg,sizeof(msg),stdin);

    if (mq_send(mqd, msg, strlen(msg) + 1, 0) == -1) {
        perror("mq_send");
        exit(EXIT_FAILURE);
    }

    if (mq_close(mqd) == -1) {
        perror("mq_close");
        exit(EXIT_FAILURE);
    }

    return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#define QUEUE_NAME "/my_mq"

int main() {
    mqd_t mqd;
    const char *msg_high = "High priority message";
    const char *msg_low = "Low priority message";
    const char *msg_medium = "Medium priority message";

    // Open the message queue
    mqd = mq_open(QUEUE_NAME, O_CREAT | O_WRONLY, 0644, NULL);
    if (mqd == (mqd_t) -1) {
        perror("mq_open");
        exit(EXIT_FAILURE);
    }

    // Send messages with different priorities
    if (mq_send(mqd, msg_low, strlen(msg_low) + 1, 1) == -1) {
        perror("mq_send");
        exit(EXIT_FAILURE);
    }
    printf("Message sent: %s with priority 1\n", msg_low);

    if (mq_send(mqd, msg_medium, strlen(msg_medium) + 1, 2) == -1) {
        perror("mq_send");
        exit(EXIT_FAILURE);
    }
    printf("Message sent: %s with priority 2\n", msg_medium);

    if (mq_send(mqd, msg_high, strlen(msg_high) + 1, 3) == -1) {
        perror("mq_send");
        exit(EXIT_FAILURE);
    }
    printf("Message sent: %s with priority 3\n", msg_high);

    // Close the message queue
    if (mq_close(mqd) == -1) {
        perror("mq_close");
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
#define MAX_SIZE 256

int main() {
    mqd_t mqd;
    struct mq_attr attr;

    attr.mq_flags = 0;         // Blocking mode
    attr.mq_maxmsg = 10;       // Maximum number of messages
    attr.mq_msgsize = MAX_SIZE; // Maximum message size
    attr.mq_curmsgs = 0;       // Number of messages currently in queue

    mqd = mq_open(QUEUE_NAME, O_CREAT | O_RDWR, 0644, &attr);
    if (mqd == (mqd_t) -1) {
        perror("mq_open");
        exit(EXIT_FAILURE);
    }

    // Send messages with different priorities
    char *msg1 = "Low priority message";
    char *msg2 = "Medium priority message";
    char *msg3 = "High priority message";

    if (mq_send(mqd, msg1, strlen(msg1) + 1, 1) == -1) {
        perror("mq_send");
        exit(EXIT_FAILURE);
    }

    if (mq_send(mqd, msg2, strlen(msg2) + 1, 2) == -1) {
        perror("mq_send");
        exit(EXIT_FAILURE);
    }

    if (mq_send(mqd, msg3, strlen(msg3) + 1, 3) == -1) {
        perror("mq_send");
        exit(EXIT_FAILURE);
    }

    if (mq_close(mqd) == -1) {
        perror("mq_close");
        exit(EXIT_FAILURE);
    }

    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#define QUEUE_NAME "/my_mq"

int main() {
    mqd_t mqd;
    struct mq_attr attr;
	unsigned int prio;
    char buffer[256];
    const char *msg = "Hello, POSIX message queue!";
    char msg2[100] = "Hello, from Akanksha!";
	char msg3[100] = "Good Bye!!!";
    // Set the message queue attributes
    attr.mq_flags = 0;
    attr.mq_maxmsg = 10;
    attr.mq_msgsize = 256;
    attr.mq_curmsgs = 0;

    // Open the message queue
    mqd = mq_open(QUEUE_NAME, O_CREAT | O_RDWR, 0644, &attr);
    if (mqd ==  -1) {
        perror("mq_open");
        exit(EXIT_FAILURE);
    }

    // Send a message to the queue
    if (mq_send(mqd, msg, strlen(msg)+1, 5) == -1) {
        perror("mq_send");
        exit(EXIT_FAILURE);
    }

	if(mq_send(mqd, msg2, strlen(msg2)+1, 18) == -1) {
		perror("mq_send");
		exit(EXIT_FAILURE);
	}

	if(mq_send(mqd, msg3, strlen(msg3)+1, 12) == -1){
		perror("mq_send");
		exit(EXIT_FAILURE);
	}

    // Receive a message from the queue
    if (mq_receive(mqd, buffer, 256, &prio) == -1) {
        perror("mq_receive");
        exit(EXIT_FAILURE);
    }
    printf("Message received 1: %s with priority %u\n", buffer, prio);

    
    if (mq_receive(mqd, buffer, 256, &prio) == -1) {
        perror("mq_receive");
        exit(EXIT_FAILURE);
    }
    printf("Message received 1: %s with priority: %u\n", buffer, prio);

    // Get the attributes of the message queue
    if (mq_getattr(mqd, &attr) == -1) {
        perror("mq_getattr");
        exit(EXIT_FAILURE);
    }
    printf("Max messages: %ld, Max message size: %ld, Current messages: %ld\n",
           attr.mq_maxmsg, attr.mq_msgsize, attr.mq_curmsgs);

    // Set new attributes for the message queue
    struct mq_attr newattr;
    newattr.mq_flags = O_NONBLOCK; // Non-blocking mode
    if (mq_setattr(mqd, &newattr, &attr) == -1) {
        perror("mq_setattr");
        mq_close(mqd);
        mq_unlink(QUEUE_NAME);
        exit(EXIT_FAILURE);
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

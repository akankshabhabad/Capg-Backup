#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>

#define MAX_TEXT 50   // size of each message

struct my_msg
{
	long int msg_type;
	char data[MAX_TEXT];
};

int main(void)
{
	int msgid;
	int running = 1;
	struct my_msg some_data;
	char buffer[20];
	msgid = msgget((key_t) 12345, 0666|IPC_CREAT);   // it returns positive number (queue identifier)
	if(msgid == -1)
	{
		printf("Message queue is not created...\n");
	}

	while(running)
	{
		printf("Enter some text:\n");
		fgets(buffer, 20, stdin);
		some_data.msg_type= 1;
		strcpy(some_data.data, buffer);
		if(msgsnd(msgid, (void *)&some_data, MAX_TEXT, 0) == -1)   // on success, it returns 0 , on failure, it returns -1
		{
			printf("Message not sent\n");

		}

		if(strncmp(buffer, "end", 3) == 0)
		{
			running = 0;
		}

	}

}

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

int main()
{
	int running = 1;
	int msgid;
	struct my_msg some_data;
	long int msg_to_rec = 0;
	msgid = msgget((key_t)12345, 0666|IPC_CREAT);
	while(running)
	{
		msgrcv(msgid, (void *)&some_data, MAX_TEXT, msg_to_rec, 0);
		printf("Data received: %s\n", some_data. data);
		if(strncmp(some_data.data, "end", 3)==0)
		{
			running = 0;
		}
	}
		msgctl(msgid, IPC_RMID, 0);
}

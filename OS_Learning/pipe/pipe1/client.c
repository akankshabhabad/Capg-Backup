#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define FIFO "my_fifo"

int main(void)
{
	 int fd;
	 char rbuf[50];
	 char wbuf[50];
	 fd = open(FIFO, O_RDWR);

	 printf("Client's data: ");
	 fgets(wbuf, sizeof(wbuf), stdin);
	 write(fd, wbuf, sizeof(wbuf));

	 read(fd, rbuf, sizeof(rbuf));
	 printf("Data received from server: %s\n", rbuf);

	 close(fd);
	 
	 return 0;

}


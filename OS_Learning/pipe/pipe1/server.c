#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#define FIFO "my_fifo"
int main(void)
{
	int fd, n;
	char rbuf[50];
	char wbuf[50];

	mkfifo(FIFO, 0666);

	fd= open(FIFO, O_RDWR);

	read(fd, rbuf, sizeof(rbuf));
	printf("Data received from client: %s\n", rbuf);

	printf("Server data: ");
	fgets(wbuf, sizeof(wbuf), stdin);

    write(fd, wbuf, sizeof(wbuf));
	close(fd);
	return 0;
}



















#include<unistd.h>
#include<stdio.h>
int main(void)
{
//	execlp("ls","ls", "-l" , "-lt", NULL);
	execlp("ps", "ps", NULL);
	perror("Return from execlp() not expected");
	return 0;
}

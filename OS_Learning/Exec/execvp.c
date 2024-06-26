#include<stdio.h>
#include<unistd.h>

int main()
{
	char *args[] = {"ls", "-l", NULL};
	execvp("ls", args);
	perror("execvp error");
	return 1;
}

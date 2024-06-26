#include<stdio.h>
#include<unistd.h>
int main(void)
{
	printf("Before execle\n");
  //execle("/bin/ps", "ps", NULL, NULL);
    char *env[] = {"PATH = /bin", NULL}; 
	execle("/bin/cat", "cat", "execv.c", NULL, env);
	printf("After execle\n");
	return 0;
}

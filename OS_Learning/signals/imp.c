#include<stdio.h>
#include<signal.h>
#include<unistd.h>
 
void mySignalHandler(int mySignal);
int main()
{
        printf("Checking\n");
        int i=1;
        signal (SIGTERM,mySignalHandler);
        signal (SIGKILL,mySignalHandler);
        while(i>0)
        {
                printf("%d\n",i);
                i++;
                sleep(1);
        }
        return 0;
}
void mySignalHandler(int mySignal)
{
        if(mySignal==SIGTERM)
        {
                printf("SIGTERM\n");
                printf("MY Handle with signal %d\n",mySignal);
        }
        if(mySignal==SIGKILL)
        {
                printf("SIGKILL signal recieved\n");
        }
}

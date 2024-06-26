#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int fd, fd1, f1;
    char data[20] = "I love my country";

    fd = open("lseek.txt" , O_CREAT|O_RDWR, 0777);

    if(fd < 0)
    {
        perror("open() failed");
        exit(1);
    }

    write(fd, data, 15);

//    f1 = lseek(fd, 4 , SEEK_SET);
    f1 = lseek(fd , -5, SEEK_END);
    
    printf("Cursor position is at %d\n", f1);
     
    // read(fd , data , 20);
  
    // write(1, data, 20);
   
    fd1 = open("lseek1.txt" , O_CREAT|O_TRUNC|O_RDWR, 0777);

   if(fd1 < 0)
   {
       perror("open() exit");
       exit(1);
   }

    read(fd , data, 10);  
    write(fd1, data, 10);

    close(fd);
    

}


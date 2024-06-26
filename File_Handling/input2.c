#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
 
int main(void) {
    int fd;
    char buffer[20];
 
    printf("Enter text to write to file: ");
    fgets(buffer, sizeof(buffer), stdin);
 
    fd = open("hello.txt", O_CREAT|O_WRONLY , 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
 
    write(fd, buffer, 20);
 
    close(fd);
 
    return 0;
}

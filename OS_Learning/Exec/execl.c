#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Before execl\n");
    //execl("/bin/ls", "ls", NULL);
    execl("./execlp", "./execlp", NULL);
    printf("After execl\n"); // This line will not be reached if execl is successful
    return 0;
}


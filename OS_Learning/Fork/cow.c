#include <stdio.h>
#include <unistd.h>
 
int main() {
    int var1 = 20;
    int var2 = 10;
    pid_t pid = fork();
 
    if (pid == 0) {
        // Child process
        printf("Child process (PID %d), var1 = %d\n", getpid(), var1);
        var2 = 50;  // Modify the value of var2
        printf("Child process (PID %d), modified var2 = %d\n", getpid(), var2);
    } else if (pid > 0) {
        // Parent process
        printf("Parent process (PID %d), var1 = %d, var2 = %d\n", getpid(), var1, var2);
       
    } else {
 
        perror("Error");
        return 1;
    }
 
    return 0;
}

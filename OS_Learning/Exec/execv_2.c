#include <stdio.h>
#include <unistd.h>

int main() {
    char *args[] = {"ls", "-l", NULL};
    // Replace the current process with the "ls" command
    execv("/bin/ls", args);
    
  
    perror("execv");
    return 1;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define SHARED_MEM_NAME "/my_shared_memory"
#define MEM_SIZE 1024

int main() {
    int shm_fd;
    char *shared_memory;
    const char message_write[100];
    const char *message_read;

    // Create/open the shared memory object
    shm_fd = shm_open(SHARED_MEM_NAME, O_CREAT | O_RDWR, 0644);
    if (shm_fd == -1) {
        perror("shm_open");
        exit(EXIT_FAILURE);
    }

    // Set the size of the shared memory object
    if (ftruncate(shm_fd, MEM_SIZE) == -1) {
        perror("ftruncate");
        exit(EXIT_FAILURE);
    }

    // Map the shared memory object into the address space
    shared_memory = mmap(NULL, MEM_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if (shared_memory == MAP_FAILED) {
        perror("mmap");
        exit(EXIT_FAILURE);
    }

    // Fork a child process
    pid_t pid = fork();

    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } 
	else if (pid == 0) { // Child process (Reader)
        // Wait for the writer to finish writing
        sleep(5);

        // Read from the shared memory
        message_read = shared_memory;
        printf("Message read from shared memory: %s\n", message_read);
    } 
	else { // Parent process (Writer)
        // Write to the shared memory
  
        printf("Enter message to write in shared memory\n");
		fgets(message_write, sizeof(message_write)Z, stdin);
		strcpy(shared_memory, message_write);
    }

    // Unmap and close the shared memory object
    if (munmap(shared_memory, MEM_SIZE) == -1) {
        perror("munmap");
    }
    if (close(shm_fd) == -1) {
        perror("close");
    }

    // Unlink the shared memory object (Only one process should unlink)
    if (pid != 0 && shm_unlink(SHARED_MEM_NAME) == -1) {
        perror("shm_unlink");
    }

    return 0;
}


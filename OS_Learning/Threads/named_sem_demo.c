#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <semaphore.h>

#define SEM_NAME "/example_sem"
int shared = 10;
int main()
{
    sem_t *sem;

    // Create or open the named semaphore
    sem = sem_open(SEM_NAME, O_CREAT, 0644, 1);
    if (sem == SEM_FAILED) {
        perror("sem_open");
        exit(EXIT_FAILURE);
    }

    // Create child process
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
	 else if (pid == 0)
	{
        // Child process: Increment shared variable
        sem_wait(sem); // Wait for semaphore
		shared ++;
        printf("Child: Incrementing shared variable %d\n", shared); // Simulating increment operation
        sem_post(sem); // Release semaphore
    }
	else 
	{
        // Parent process: Decrement shared variable
        sem_wait(sem); // Wait for semaphore
		shared--;
        printf("Parent: Decrementing shared variable %d\n", shared); // Simulating decrement operation
        sem_post(sem); // Release semaphore
    }

    // Close and unlink the named semaphore
    sem_close(sem);
    sem_unlink(SEM_NAME);

    return 0;
}


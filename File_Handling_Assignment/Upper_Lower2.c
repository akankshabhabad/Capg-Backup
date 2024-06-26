#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

int main(void) {
    FILE *file;
    int count = 0;
    char buff[MAX];

    // Open file for reading
    file = fopen("Count.txt", "r");
    if (file == NULL) {
        perror("fopen() failed");
        exit(1);
    }

    int in_word = 0;

    // Read data from file
    while (fgets(buff, MAX, file) != NULL) {
        for (int i = 0; buff[i] != '\0'; i++) {
            if (isspace(buff[i])) {
                in_word = 0;
            } else {
                if (!in_word) {
                    count++;
                    in_word = 1;
                }
            }
        }
    }

    // Close the file
    fclose(file);

    printf("Number of words in the file: %d\n", count);

    return 0;
}


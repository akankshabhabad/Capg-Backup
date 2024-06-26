#include <stdio.h>

int main() {
    // Open the file in read mode
    FILE *file = fopen("example.txt", "r");

    // Check if file opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit with error
    }

    int c; // Variable to store each character read from the file

    // Read characters from the file until EOF is reached
    while ((c = fgetc(file)) != EOF) {
        // Print each character to the standard output (stdout)
        printf("%c", c);
    }

    // Close the file
    fclose(file);

    return 0; // Exit successfully
}


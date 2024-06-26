#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fscanf(file, "%s %d", name, &age);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    fclose(file);

    return 0;
}


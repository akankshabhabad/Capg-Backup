#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    FILE *fp = NULL;
    char str[100]; // Increased buffer size to accommodate longer lines

    fp = fopen("text3.txt", "r");
    if(fp == NULL) {
        perror("fopen() failed\n");
        exit(1);
    }

    while (fgets(str, sizeof(str), fp) != NULL) { // Read up to sizeof(str) - 1 characters
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}


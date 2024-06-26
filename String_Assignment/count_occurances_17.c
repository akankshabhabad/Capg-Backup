#include <stdio.h>

int main() {
    char input[100];
    int digit_count[10] = {0};
    int whitespace_count = 0;
    int other_count = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); 

    // Iterate through each character in the input string
    while (input[i] != '\0') {
        switch (input[i]) {
            // Count occurrences of digits '0' to '9'
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                digit_count[input[i] - '0']++;
                break;

            // Count occurrences of whitespace characters
            case ' ': case '\t': case '\n': case '\r': case '\f': case '\v':
                whitespace_count++;
                break;

            // Count occurrences of other characters
            default:
                other_count++;
                break;
        }
        i++;
    }

    // Print the counts of each category
    printf("Occurrences of each digit:\n");
    for (int j = 0; j < 10; j++) {
        printf("Digit %d: %d\n", j, digit_count[j]);
    }
    printf("Whitespace count: %d\n", whitespace_count);
    printf("Other character count: %d\n", other_count);

    return 0;
}


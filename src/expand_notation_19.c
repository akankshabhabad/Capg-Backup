#include<string.h>
void expandShorthand(char *input, char *output) {
    int i, j = 0;
    int len = strlen(input);

    for (i = 0; i < len; i++)
    {
        if (input[i] == '-' && i > 0 && i < len - 1)
        {

            char start = input[i - 1];
            char end = input[i + 1];

            while (start <= end) {
                output[j++] = start++;
            }
            i++;
        }
        else
        {
            output[j++] = input[i];
        }
    }

    output[j] = '\0';
}

#include <stdio.h>
#include<string.h>

#include <stdio.h>

char *strrem(char *str, const char *sstr) {
    char *p1 = str;
    const char *p2 = sstr;
    char *p = str;
    while (*p) {
        if (*p == *p2) {
            char *temp = p;
            while (*p && *p2 && *p == *p2) {
                p++;
                p2++;
            }
            if (!*p2) { // If entire sstr is found
                while (*p) {
                    *temp = *p;
                    temp++;
                    p++;
                }
                *temp = '\0'; // Null-terminate the modified string
                return str;
            }
            p = temp; // Reset p to the start of the potential match
            p2 = sstr; // Reset p2 to the start of sstr
        }
        p++;
    }
    return str; // Return the original string if sstr is not found
}



int main() {
    char str[100];
    const char sstr[50];
    printf("Enter the main string :");
    fgets(str , sizeof(str) , stdin);
    printf("Enter the substring which you want to remove : ");
    fgets(sstr , sizeof(sstr) , stdin);
    printf("Original string: %s\n", str);
    strrem(str, sstr);
    printf("Modified string: %s\n", str);

    return 0;
}


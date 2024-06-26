#include <stdio.h>

// Function prototype
void before_main(void);

int main() {
    printf("Inside main()\n");
    return 0;
}

// Function definition
void before_main(void) {
    printf("Function invoked before main()\n");
}

// Function call before main()
__attribute__((constructor))
void before_main_call(void) {
    before_main();
}


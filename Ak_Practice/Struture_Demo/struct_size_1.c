#include <stdio.h>
 
struct Flags {
   int j:9;
   short s:9;
   char c;
   double k:5;
   short t:9;
   short u:9;
   short v:9;
   char d;
};
 
int main() {
    struct Flags f;
    printf("Size of struct Flags: %ld\n", sizeof(struct Flags));
 
    return 0;
}




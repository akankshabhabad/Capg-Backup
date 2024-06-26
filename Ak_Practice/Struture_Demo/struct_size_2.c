#include <stdio.h>
 
struct Flags {
  char c;
  short s:8;
  int i:9;
  short j:4;
  short k:3;
};
 
int main() {
    struct Flags f;
    printf("Size of struct Flags: %ld\n", sizeof(struct Flags));
 
    return 0;
}



#include <stdio.h>

struct Flags {
  char c;
  short s:8;
  int i:9;
  short j:9;
  short k:7;
  short l:6;
  short h:5;
};

int main() {
    struct Flags f;
    printf("Size of struct Flags: %ld\n", sizeof(struct Flags));

    return 0;
}


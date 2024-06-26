#include <stdio.h>

struct store
{
   double price;
   char *title;
   char *author;
   int number_pages;
   int color;
   int size;
   char *design;
} str1;

int main() {
    printf("Size of struct store: %lu bytes\n", sizeof(struct store));
    printf("Size of struct store: %lu bytes\n", sizeof(str1));

    printf("\nAddress of price: %p" , &str1.price);
    printf("\nAddress of *title: %p" , &str1.title);
    printf("\nAddress of *author: %p" , &str1.author);
    printf("\nAddress of number_pages: %p" , &str1.number_pages);
    printf("\nAddress of color: %p" , &str1.color);
    printf("\nAddress of size: %p" , &str1.size);
    printf("\nAddress of *design: %p\n" , &str1.design);
    return 0;
}

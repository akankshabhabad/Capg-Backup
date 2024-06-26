#include <stdio.h>
unsigned int big_endian(unsigned int num) {
   unsigned char byte1 = (unsigned char)(num >> 24); 
   unsigned char byte2 = (unsigned char)(num >> 16);
   unsigned char byte3 = (unsigned char)(num >> 8);
   unsigned char byte4 = (unsigned char)num; 
   // Combine bytes in reversed order
   return (byte4 << 24) | (byte3 << 16) | (byte2 << 8) | byte1;
}
int main() {
   unsigned int num;
   printf("Enter a 32-bit unsigned integer (in hexadecimal): ");
   scanf ("%x", &num);
   unsigned int big_endian_num = big_endian(num);
   printf ("little_endian number is: %X\n", num);
   printf ("big_endian num is: %X\n", big_endian_num);
   return 0;
}

#include<stdio.h>
#include<string.h>
#define SIZE 20

void main()
{
    char str1[SIZE] = "Capgemini";
    char str2[] = "Capgemini";
 //  char *str3 = NULL;   // char *str3;  // Segmentation fault
    char *str3 = "Capgemini";

    printf("Size of str1: %ld\n" , sizeof(str1)); //It prints size i.e 20
    printf("Length of str1: %ld\n" , strlen(str1));
    printf("Size of str2: %ld\n" , sizeof(str2));  //It prints 10 because it adds last '\0' also
    printf("Length of str2: %ld\n" , strlen(str2));
    printf("Size of str3: %ld\n" , sizeof(str3));  //It prints the pointer size i.e 8 bytes
    printf("Length of str3: %ld\n" , strlen(str3)); 
    str1[0] = 'A';
    printf("After replacing str1 is: %s\n" , str1);
    str2[0] = 'A';
    printf("After replacing str2 is: %s\n" , str2);
    //*(str3 + 0) = 'A';         // Read only string stored in RO data we can't modify data
    //str3[0] = 'A';
    printf("After replacing str3 is: %s\n" , str3);

}

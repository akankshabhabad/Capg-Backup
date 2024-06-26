#include <stdio.h>
#include<stddef.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    size_t size = sizeof(arr);
    printf("Size of original array: %zu\n", size);   // This will print the size of the original array

    // Using sizeof() with increment operator
    size_t size1 = sizeof(++arr);
    printf("Size of incremented array: %zu\n", size1);  // This will print the size of the original array

    // Using sizeof() with decrement operator
    size_t size2 = sizeof(--arr);
    printf("Size of decremented array: %zu\n", size2);  // This will print the size of the original array

    return 0;
}


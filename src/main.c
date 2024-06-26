#include "../include/hdr.h"
 
int main ()
{
    
    int choice;
    do{
        printf("\n***************List of options************");
        printf("\n1. Delete 'a' character from string");
        printf("\n2. Remove all non alphabets from a string");
        printf("\n3. To swap two numbers");
        printf("\n4. To add even numbers in array");
        printf("\n5. To delete negative elements in array");
        printf("\n6. To add all negative numbers in array");
        printf("\n7. To check if array contains duplicate numbers");
        printf("\n8. Insert number at a given location in array");
        printf("\n9. Delete number from a given location in array");
        printf("\n10. Search and replace 'a' with 'k' in string");
        printf("\n11. Sort the array in ascending order");
        printf("\n12. Convert string from uppercase to lowercase"); 
        printf("\n13. Covert Decimal number to hexadecimal number");       
        printf("\n14. Reverse string without using temporary string");
        printf("\n15. To expand the shorthand notation");                
        printf("\nEnter 0 to exit\n");

        printf("\n\nEnter your choice:");
        scanf("%d", &choice);
        getchar();
 
        char *str;
        char *temp;
        int *arr;
        int tmp;
        int *tempp;
        unsigned int num1;
        unsigned int num2;
        int size;
        int loc;
        int no;
 
        switch (choice){
            case 1:
 
                str = (char *) malloc (50 * sizeof (char) );
                if (str == NULL) {
 
                    printf ("\nMomory allocation failed");
                    break;
                }
 
                printf ("\nEnter the string: ");
                fgets (str, 50,stdin);
                str [strcspn (str, "\n")] = '\0';
                delete_a_from_str(str);
                printf ("\nString after deleting 'a' character: %s\n", str);
                free (str);
                break;
 
 
            case 2:
                str = (char *) malloc (50 * sizeof (char) );
                if (str == NULL)
                {
                    printf ("\nMomory allocation failed");
                    break;
                }
 
                printf ("\nEnter the string: ");
                fgets (str,50,stdin);
                str [strcspn (str, "\n")] = '\0';
                remove_non_alpha(str);
                printf("\nString after removing all non alphabets: %s\n", str);
                free (str);
        
                break;
 
            case 3:
                printf("\nEnter the numbers: ");
                scanf("%u", &num1);
                scanf("%u", &num2);
                swap(&num1, &num2);
                printf("Numbers after swapping are: %u and %u\n", num1, num2);
                break;
 
            case 4:
                printf("\nEnter size of array: ");
                scanf("%d", &size);
                arr = (int *) malloc(size * sizeof(int));
                if(arr == NULL)
                {
                    printf("\nMemory allocation failed");
                    break;
                }
                printf("\nEnter array elements: ");
                 for (int i = 0; i < size; i++)
                 {
                    scanf("%d", arr + i);
                 }
 
                printf("Sum of even numbers in the array: %d\n", add_even(arr , size));
 
                free(arr);
                break;
 
 
            case 5:
                printf("\nEnter size of array: ");
                scanf("%d", &size);
                arr = (int *)malloc(size * sizeof(int));
 
                if(arr == NULL)
                {
                      printf("\nMemory allocation failed");
                      break;
                }
                printf("\nEnter array elements: ");
                for (int i = 0; i < size; i++)
                {
                    scanf("%d", arr + i);
                }
                delete_negative(arr , &tmp, size);
                printf("\nArray after deleting negative numbers:\n ");
                for (int i = 0; i < tmp; i++)
                {
                     printf("%d  ", *(arr + i));
                }
                printf("\n");
 
                free(arr);
                break;
 
            case 6:
                printf("\nEnter size of array: ");
                scanf("%d", &size);
                arr = (int *)malloc(size * sizeof(int));
 
                if(arr == NULL)
                {
                      printf("\nMemory allocation failed");
                      break;
                }
                printf("\nEnter array elements: ");
                for (int i = 0; i < size; i++)
                {    
                    scanf("%d", arr + i);
                }
               
                printf("\nSum of negative numbers: %d", add_negative(arr , size));
 
                free(arr);
                break;
 
            case 7:
                printf("\nEnter size of array: ");
                scanf("%d", &size);
                arr = (int *)malloc(size * sizeof(int));
 
                if(arr == NULL)
                {
                      printf("\nMemory allocation failed");
                      break;
                }
                printf("\nEnter array elements: ");
                for (int i = 0; i < size; i++)
                {    
                    scanf("%d", arr + i);
                }
                if(duplicate_num(arr, size)) 
                {
                    printf( "Yes, the array contains duplicates numbers\n");
                }
                else
                {
                    printf("No, the array does not contain duplicates numbers\n");
                }
                break;
 
 
            case 8:
                printf("\nEnter size of array: ");
                scanf("%d", &size);
                arr = (int *)malloc(size * sizeof(int));
                tempp = (int *)malloc((size + 1) * sizeof(int));
 
                if(arr == NULL)
                {
                      printf("\nMemory allocation failed");
                      break;
                }
                printf("\nEnter array elements: ");
                for (int i = 0; i < size; i++)
                {
                    scanf("%d", arr + i);
                }
                printf("\nEnter the location where you want to insert number: ");
                scanf("%d", &loc);
                printf("\nEnter the number to insert: ");
                scanf("%d", &no);
 
                insert_at_loc(arr , loc , no , size);
                printf("\nArray after inserting number at location: ");
                for (int i = 0; i <= size; i++)
                {
                     printf("%d ", *(arr + i));
                }
                printf("\n");
 
                free(arr);
                break;
 
            case 9:
                printf("\nEnter size of array: ");
                scanf("%d", &size);
                arr = (int *)malloc(size * sizeof(int));
 
                if(arr == NULL)
                {
                      printf("\nMemory allocation failed");
                      return 1;
                }
                printf("\nEnter array elements: ");
                for (int i = 0; i < size; i++)
                {
                    scanf("%d", arr + i);
                }
                
                printf("Enter the location from which you want to delete:");
                scanf("%d", &loc);
                delete_at_loc(arr ,size ,loc);
                printf("\nArray after deleting number : ");
                for (int i = 0; i < size - 1; i++)
                {
                     printf("%d ", *(arr + i));
                }
                printf("\n");
 
                free(arr);
                break;

           case 10:
                
                str = (char *) malloc (50 * sizeof (char) );
                if (str == NULL) {

                    printf ("\nMomory allocation failed");
                    break;
                }

                printf ("\nEnter the string: ");
                fgets (str, 50,stdin);
                str [strcspn (str, "\n")] = '\0';
                printf ("\nString after replacing 'a' with 'k' character: %s\n", replace_a_k(str));
                free (str);
                break;

           case 11:

                
                printf("\nEnter size of array: ");
                scanf("%d", &size);
                arr = (int *)malloc(size * sizeof(int));
 
                if(arr == NULL)
                {
                      printf("\nMemory allocation failed");
                      break;
                }
                printf("\nEnter array elements: ");
                for (int i = 0; i < size; i++)
                {    
                    scanf("%d", arr + i);
                }
               
                printf("\nArray after sorting in ascending order :\n");
                sort_array(arr , size);
                for( int i = 0; i< size ; i++)
                {
                    printf("%d " , *(arr + i));
                }
 
                free(arr);
                break;


          
           case 12:
                
                str = (char *) malloc (50 * sizeof (char) );
                if (str == NULL) {

                    printf ("\nMomory allocation failed");
                    break;
                }

                printf ("\nEnter the string: ");
                fgets (str, 50,stdin);
                str [strcspn (str, "\n")] = '\0';
                printf ("\nString after convert uppercase to lowercase: %s\n", upperToLower(str));
                free (str);
                break;



           case 13:
                printf("Enter  the number:");
                scanf("%d" , &no);
                str = (char *)malloc(10 * sizeof(char));

                if(str == NULL)
                {
                      printf("\nMemory allocation failed");
                      break;
                }
                str = decimal_to_hexa(no , str);
                printf("\nNumber in hexadecimal : %s\n", str);
                
                free(str);
                break;


            case 14:
                str = (char *) malloc (50 * sizeof (char) );
                if (str == NULL)
                {
                    printf ("\nMomory allocation failed");
                    break;
                }
 
                printf ("\nEnter the string: ");
                fgets (str,50,stdin);
                str [strcspn (str, "\n")] = '\0';
                reverse_string(str);
                printf("\nString after reversing: %s\n", str);
                free (str);
        
                break;

             case 15:
               
                str = (char *) malloc (50 * sizeof (char) );
                if (str == NULL)
                {
                    printf ("\nMomory allocation failed");
                    break;
                }
                
                temp = (char *) malloc (50 * sizeof (char) );
                if (temp == NULL)
                {
                    printf ("\nMomory allocation failed");
                    break;
                }

 
                printf ("\nEnter the string to expand : ");
                fgets (str,50,stdin);
                str [strcspn (str, "\n")] = '\0';
                expandShorthand(str , temp);
                printf("\nString after reversing: %s\n", temp);
                free (str);
                free (temp);
        
                break;
                
            default:
                printf("\nExiting...\n");
                break;
        }
      } while (choice != 0 );
      return 0;
 
 
}

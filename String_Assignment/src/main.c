#include "../include/hdr.h"
 
 
int main(void)
{
    int choice;
    printf("\n************************************************String Assignment*****************************************");
    do{
        printf("\n\n============== List of options =============");
        printf("\n1. To copy a string into another string\n");
        printf("\n2. To copy n bytes from source to destination\n");
        printf("\n3. To return the index of first occurance of any character in string\n");
        printf("\n4. To append two strings\n");
        printf("\n5. To append n bytes from source to destination\n");
        printf("\n6. To compare two string\n");
        printf("\n7. To compare two string with ignoring the case\n");
        printf("\n8. To count the consecutive matching character from string 1 in string 2\n");
        printf("\n9. To tokenized the string\n");
        printf("\n10. Check string is pallindrome or not\n");
        printf("\n11. To reverse the string\n");
        printf("\n12. Insert character at given position\n");
        printf("\n13. Squeezes the consecutive similar characters in string\n");
        printf("\n14. Remove substring from the main string\n");
        printf("\n15. Check whether the string is rotated or not\n");
    
        printf("\nEnter 0 to exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        getchar();
        char *src;
        char *dest = NULL;
        char ch;
        char *delim;
        int n;
        int pos;
        int result1 , result2 , result3;

        switch(choice){
            case 1:
                src = (char *) malloc (SIZE * sizeof (char) );
                if (src == NULL) 
                {
 
                    printf ("\nMomory allocation failed");
                    return 1;
                }
                

                dest = (char *) malloc (SIZE * sizeof (char) );
                if (dest == NULL) 
                {
 
                    printf ("\nMomory allocation failed");
                    return 1;
                }
 

                printf ("\nEnter the string: ");
                fgets (src, SIZE ,stdin);
                src [strcspn (src, "\n")] = '\0';
                printf ("\nDestination string after copying: %s\n", strcopy(dest, src));
 
                free (src);
                free(dest);
                break;

            case 2:

                src = (char *) malloc (SIZE * sizeof (char) );
                if (src == NULL) 
                {
 
                    printf ("\nMomory allocation failed");
                    return 1;
                }

                
                dest = (char *) malloc (SIZE * sizeof (char) );
                if (dest == NULL) 
                {
 
                    printf ("\nMomory allocation failed");
                    return 1;
                }
 
 
                printf ("\nEnter the string: ");
                fgets (src, SIZE ,stdin);
                src [strcspn (src, "\n")] = '\0';
                printf("\nEnter the number of bytes you want to copy:");
                scanf("%d" , &n);
                printf ("\nDestination string after copying %d bytes: %s\n", n , strncopy(dest, src , n));
 
                free (src);
                free(dest);
                break;

             case 3: 
                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )]='\0';
                printf("\nEnter the character: ");
                scanf("%c" , & ch);
                printf("\n Character %c is found at %d position\n" , ch , strindex(src , ch));
                
                free(src);
                break;

                
             case 4:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the first string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )]='\0';

                dest = (char *) malloc (SIZE * sizeof(char));
                if (dest == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the second string: ");
                fgets(dest , SIZE , stdin);
                dest [strcspn( dest , "\n" )]='\0';
                printf("\nAfter appending destination string will be : %s\n" , strappend(dest , src));

                free(src);
                free(dest);
                break;

                
             case 5:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the first string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )]='\0';

                dest = (char *) malloc (SIZE * sizeof(char));
                if (dest == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the second string: ");
                fgets(dest , SIZE , stdin);
                dest [strcspn( dest , "\n" )]='\0';
                printf("\nEnter the number of bytes you want to append: ");
                scanf("%d" , &n);
                printf("\nAfter appending %d bytes destination string will be :%s\n" , n , strnappend(dest , src , n));

                free(src);
                free(dest);
                break;

             case 6:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the first string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )]='\0';

                dest = (char *) malloc (SIZE * sizeof(char));
                if (dest == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the second string: ");
                fgets(dest , SIZE , stdin);
                dest[strcspn( dest , "\n" )]='\0';
                result1 = strcomp(src , dest);
                if(result1 == 0)
                {
                    printf("\n%s and %s  are equal\n" , src , dest);
                }     
                else if(result1 > 0)
                {
                    printf("\n%s is greater than %s\n" , src , dest);
                }
                else
                {
                    printf("\n%s is less than %s\n" , src , dest);
                }

                free(src);
                free(dest);
                break;


             case 7:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the first string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )]='\0';

                dest = (char *) malloc (SIZE * sizeof(char));
                if (dest == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the second string: ");
                fgets(dest , SIZE , stdin);
                dest[strcspn( dest , "\n" )]='\0';
                result2 = strcompcase(src , dest);
                if(result2 == 0)
                {
                    printf("\nBoth strings are equal\n");
                }     
                else if(result2 > 0)
                {
                    printf("\nString 1 is greater than String 2\n");
                }
                else
                {
                    printf("\nString 1 is less than String 2\n");
                }
                free(src);
                free(dest);
                break;

           case 8:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the first string: ");
                fgets(src , SIZE , stdin);
               src [strcspn( src , "\n" )]='\0';

                dest = (char *) malloc (SIZE * sizeof(char));
                if (dest == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the second string: ");
                fgets(dest , SIZE , stdin);
                dest [strcspn( dest , "\n" )]='\0';
                printf("\nCount of consecutive match characters : %d ", strspan(src , dest));

                free(src);
                free(dest);
                break;
 
           case 9:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
                
                printf("\nEnter the string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )]='\0';
                printf("Enter the delimeter: ");
                scanf("%s", delim);
                strtoken(src , delim);
                
                free(src);
                free(delim);
                break;

             case 10:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
               
                printf("\nEnter the string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )]='\0';
           
                result3 = strpalin(src);
                  
                if(result3 == 0)
                {
                    printf("\n%s is not pallindrome string" , src);
                }
                else
                {
                    printf("\n%s is pallindrome string\n" , src);
                }
                free(src);
                
               
                break;



             case 11:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
               
                printf("\nEnter the string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )] = '\0';
           
                printf("String after reversing : %s" , strrev(src));
                free(src);
               
                break;


             case 12:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
               
                printf("\nEnter the string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )] = '\0';
                printf("\nEnter the position where you want to insert character: ");
                scanf("%d" , &pos);
                getchar();
                printf("\nEnter the character which you want to insert:");
                scanf("%c", &ch);
                printf("String after inserting %c character at %d position : %s" , ch , pos , strinschr(src , ch , pos));
                
                free(src);
                break;

          case 13:

                src = (char *) malloc (SIZE * sizeof(char));
                if (src == NULL)
                {
                    printf("\nMemory allocation failed");
                    return 1;
                }
               
                printf("\nEnter the string: ");
                fgets(src , SIZE , stdin);
                src [strcspn( src , "\n" )] = '\0';
           
                printf("String after squeezing : %s" , strsqueeze(src));
                free(src);
               
                break;

          case 14:

                src = (char *) malloc (SIZE * sizeof (char) );
                if (src == NULL) 
                {
 
                    printf ("\nMomory allocation failed");
                    return 1;
                }
                

                dest = (char *) malloc (SIZE * sizeof (char) );
                if (dest == NULL) 
                {
 
                    printf ("\nMomory allocation failed");
                    return 1;
                }
 

                printf ("\nEnter the main string: ");
                fgets (src, SIZE ,stdin);
                src [strcspn (src, "\n")] = '\0';
                printf("\nEnter the substring: ");
                fgets (dest , SIZE , stdin);
                dest [strcspn (dest , "\n")] = '\0';
                printf ("\nString after removing substring: %s\n", strrem(dest, src));
 
                free (src);
                free(dest);
                break;
                

          case 15:

  /*              src = (char *) malloc (SIZE * sizeof (char) );
                if (src == NULL) 
                {
 
                    printf ("\nMomory allocation failed");
                    return 1;
                }
                

                dest = (char *) malloc (SIZE * sizeof (char) );
                if (dest == NULL) 
                {
 
                    printf ("\nMomory allocation failed");
                    return 1;
                }
 

                printf ("\nEnter the first string: ");
                fgets (src, SIZE ,stdin);
                src [strcspn (src, "\n")] = '\0';


                printf ("\nEnter the second string: ");
                fgets (dest, SIZE ,stdin);
                dest [strcspn (dest, "\n")] = '\0';
                printf ("\nDestination string after copying: %s\n", strrot(dest, src));
 
                free (src);
                free(dest);
                break;
*/
 
            default:
                printf("\nExiting...\n");
 
        }
    } while(choice != 0);
    return 0;
}

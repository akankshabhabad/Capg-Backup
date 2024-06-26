#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Employee{
    int emp_id;
    char *name;
    float salary;
};


void printDetails(struct Employee *emp);

int main()
{
    struct Employee *emp1;
    emp1 = (struct Employee *)malloc(100 * sizeof(struct Employee));
    if(emp1 == NULL)
    {
       printf("Memory allocation failed");
        return 1;
    }
    
    emp1->name = (char *)malloc(100 * sizeof(char));
    if(emp1->name == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter the Employee ID: ");
    scanf("%d", &emp1->emp_id);
    getchar();
    printf("Enter the Employee Name: ");
    fgets(emp1->name, 100, stdin);
    emp1->name[strcspn(emp1->name, "\n")] = '\0';
    printf("Enter the Employee Salary: ");
    scanf("%f", &emp1->salary);
    printDetails(emp1);
    
    free(emp1->name);
    free(emp1);
    return 0;
}


void printDetails(struct Employee *emp)
{
    printf("\n\nEmployee Details: ");
    printf("\nEmployee ID: %d", emp->emp_id);
    printf("\nEmployee Name: %s", emp->name);
    printf("\nEmployee Salary: %.2f\n", emp->salary);
}

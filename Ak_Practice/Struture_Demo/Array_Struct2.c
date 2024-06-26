#include<stdio.h>

typedef struct Employee{
    int id;
    char name[50];
    float salary;
}Emp;

void printDetails(struct Employee *, int);

int main(void)
{
    int i, n, num;
    printf("\nEnter how many employees data you want to enter?  ");
    scanf("%d",&n);
    Emp e[n];
    for(i = 0; i<n; i++)
    {
        printf("\nEnter the ID of Employee %d :", i+1);
        scanf("%d", &e[i].id);
        printf("\nEnter the name of Employee %d :",i+1);
        scanf("%s", e[i].name);
        printf("\nEnter the salary of Employee %d :",i+1);
        scanf("%f", &e[i].salary);
    }

    printf("\nFrom which employee id you want to print: \n");
    scanf("%d", &num);

    printDetails(e + (num-1), n - (num-1));
    return 0;

}

void printDetails(struct Employee *ptr, int n) {
    printf("\n\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", ptr->id);
        printf("Name: %s\n", ptr->name);
        printf("Salary: %.2f\n", ptr->salary);
        printf("\n");
        ptr++;
    }
}

#include<stdio.h>
#define SIZE 5

struct Employee{
    int id;
    char *name;
    float salary;
};

void printDetails(struct Employee *, int);

int main(void)
{
    struct Employee emp[SIZE] = {
        {1, "John", 50000.0},
        {2, "Alice", 60000.0},
        {3, "Bob", 55000.0},
        {4, "Ak", 34000.0},
        {5, "Kg", 23000.0}
    };

//    printDetails(emp, SIZE - 2);
//    printDetails(emp + 3,SIZE - 3);
      
      printDetails(emp + 2, SIZE - 2);
    return 0;

}

void printDetails(struct Employee *emp, int numEmployees) {
    printf("Employee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("\n");
    }
}

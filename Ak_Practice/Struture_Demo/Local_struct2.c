#include<stdio.h>

struct Employee{
    char *name;
    int age;
    int salary;
};

int manager()
{
    struct Employee manager;

    manager.age = 27;

    if(manager.age > 30)
        manager.salary = 65000;
    else
        manager.salary = 55000;
    return manager.salary;
}

int main(void)
{
    struct Employee emp1;
    struct Employee emp2;
    printf("Enter the salary of employee 1:");
    scanf("%d", &emp1.salary);
    printf("Enter the salary of employee 2:");
    scanf("%d", &emp2.salary);
    printf("Salary of employee 1: %d\n", emp1.salary);
    printf("Salary of employee 2: %d\n", emp2.salary);
    printf("Salary of manager: %d\n" , manager());

    return 0;
}

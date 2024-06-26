#include<stdio.h>

struct {
    char *name;
    int age;
    int salary;
}emp1, emp2;

int manager()
{
    struct {
        char *name;
        int age;
        int salary;
    }manager;
    
    manager.age = 27;

    if(manager.age > 30)
        manager.salary = 65000;
    else
        manager.salary = 55000;
    return manager.salary;
}

int main(void)
{
    printf("Enter the salary of employee 1:\n");
    scanf("%d", &emp1.salary);
    printf("Enter the salary of employee 2:\n");
    scanf("%d", &emp2.salary);
    printf("Salary of employee 1: %d\n", emp1.salary);
    printf("Salary of employee 2: %d\n", emp2.salary);
    printf("Salary of manager: %d\n" , manager());

    return 0; 
}

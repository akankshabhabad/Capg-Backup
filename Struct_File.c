#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#define SIZE 50
 
typedef struct Employee_Info{
    int emp_id;
    char name[20];
    long contact;
}Employee;
 
int main (void)
{
    Employee *emp;
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    emp = (Employee *)malloc(SIZE * sizeof(Employee));
    if(emp == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
 
    printf("Enter employee data\n");
    for(int i = 0;i < n; i++){
        printf("\nEnter employee id for employee %d: ", i+1);
        scanf("%d", &(emp+i)->emp_id);
        printf("\nEnter employee name for employee %d: ",i+1);
        scanf("%s", (emp+i)->name);
        printf("\nEnter contact number for employee %d: ",i+1);
        scanf("%ld", &(emp+i)->contact);
 
    }
    FILE *fp = NULL;
    fp = fopen("Data.db", "w+");
    if(fp == NULL){
        perror("File not found");
        return 1;
    }
    fprintf(fp, "Emp id\tEmp name\t Contact\n");
 
    for(int i = 0;i < n; i++){
        fprintf(fp,"%d\t%s\t%ld\n", (emp+i)->emp_id, (emp+i)->name, (emp+i)->contact);
    }
    for(int i = 0;i < n; i++){
        printf("\nEmployee id for employee %d is %d \n", i+1, (emp+i)->emp_id);
        printf("\nEmployee name for employee %d is %s \n",i+1, (emp+i)->name);
        printf("\nContact number for employee %d is %ld \n",i+1, (emp+i)->contact);
 
    }
    //fclose(fp);
    //free(emp);
    return 0;
}

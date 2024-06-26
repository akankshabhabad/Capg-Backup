#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#define MAX 100

typedef struct Employee
{
        int emp_id;
        char emp_name[20];
        long mobileno;
}Emp;

int main(void)
{
        int n;
        printf("\nEnter the number of employee: ");
        scanf("%d", &n);

        Emp *e;
        e = (Emp *) malloc(MAX * sizeof(Emp));
        if(e == NULL)
        {
                printf("Memory Allocation Failed");
                return 1;
        }
        printf("\nEnter details of %d employees:\n", n);
        for(int i = 0;i < n;i++)
        {
                printf("\nEnter the employee %d ID: ", i + 1);
                scanf("%d", &(e + i)->emp_id);
                printf("\nEnter the employee %d Name: ", i + 1);
                scanf("%s", (e + i)->emp_name);
                printf("\nEnter the employee %d contact number: ", i + 1);
                scanf("%ld", &(e + i)->mobileno);
        }

        FILE *fp = NULL;
        fp = fopen("Data1.db", "w+");
		if(fp == NULL)
		{
			perror("fopen() error");
			exit(1);
		}
	    fprintf(fp, "|ID\t|Name\t|Contact\n");
		for(int i = 0;i < n;i++)
		 {
			 fprintf(fp, "|%d\t|%s\t|%ld\n", (e + i)->emp_id, (e + i)->emp_name,(e + i)->mobileno);
		 }
        
        printf("\nData write to file successfully");
        free(e);
        fclose(fp);
        return 0;
}

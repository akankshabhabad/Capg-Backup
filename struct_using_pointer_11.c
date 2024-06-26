#include<stdio.h>

struct student
{
  
int rollno;
char name[10];
float marks;
char address[50];

};

void main(){

  struct student s1;
  struct student* ptr;
  ptr = &s1;
   
  printf("Enter roll no: ");
  scanf("%d", &ptr->rollno);
 
  printf("Enter name: ");
  scanf("%s", ptr->name);
    
  printf("Enter marks: ");
  scanf("%f", &ptr->marks);

  printf("Enter address: ");
  scanf("%s", ptr->address);

  printf("Student Details:\n");
  printf("Roll no : %d\n", ptr -> rollno);
  printf("Name : %s\n", ptr -> name);
  printf("Marks : %.2f\n", ptr -> marks);
  printf("Address : %s\n", ptr -> address);

}


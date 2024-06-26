/* 
 File name :  semaphore.c
 Author : Akanksha Bhabad
 Date: 29/02/2023
 Description: Write a program to implement a semaphore which will contains two functions wait() and signal() , wait() function will decrement the variable counter and signal() function will increment the variable counter.
 */
   

#include<stdio.h>


int signal();
int wait();

int count=0;

void main()

{ 
    
    signal();
    signal();
    signal();
    signal();
    wait();
    printf("\nFinal count : %d", count);

}



int signal()
{
 
  count=count+1;
  printf("\nCounter after signal : %d ",count);

}

int wait()
{
  
    count=count-1;
    printf("\nCounter after waiting : %d ",count);
} 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* delete_a_from_str(char *str);
void remove_non_alpha(char *str);
void swap(int *n1,int *n2);
int add_even(int *arr , int size);
int* delete_negative(int *arr , int *tmp , int size);
int add_negative(int *arr , int size);
int duplicate_num(int *arr,int size);
void insert_at_loc(int *arr , int pos , int num , int size);
void delete_at_loc(int *arr , int size , int pos);
int isAlphabet(char ch);
char* decimal_to_hexa(int num , char *hexa);
void sort_array(int *arr , int size);
void reverse_string(char *str);
char* upperToLower(char* str);
char* replace_a_k(char* str);
void expandShorthand(char *input , char *output);

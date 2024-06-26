#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 50

char* strcopy(char *dest , const char *src);
char* strncopy(char *dest , const char *src , int n);
int strindex(char *str, char ch);
char* strappend(char *dest , const char *src);
char* strnappend(char *dest , const char *src , int n);
int strcomp(const char *s1 , const char *s2);
int strcompcase(char *s1 , char *s2);
void to_lower(char *s1);
int strpalin(char *str);
char* strrev(char *str);
int strspan(const char *s1 , const char *s2);
char* strtoken(char *str , const char *delim);
char* strinschr(char *str , const char ch , int pos);
char* strsqueeze(char *str);


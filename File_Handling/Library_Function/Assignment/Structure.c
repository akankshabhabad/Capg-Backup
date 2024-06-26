#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct EH {
    unsigned char e_ident[16];
    short e_type;
    short e_machine;
    int e_version;
    unsigned int e_entry;
};

int main(void)
{
   
    FILE *fp = NULL;

    struct EH arr[10];

    for(int i = 0;i < 10; i++)
    {
        for(int j = 0;j < 16; j++)
        {
            arr[i].e_ident[j] = i + j;
        }
    
        arr[i].e_type = i;
        arr[i].e_machine = i * 2;
        arr[i].e_version = i * 3;
        arr[i].e_entry = i * 4;
    }

    fp = fopen("info.db", "w+");
    if(fp == NULL)
    {
        perror("open() failed");
        exit(1);
    }
    
    fwrite(arr, sizeof(struct EH), 10, fp);
    printf("Array written to file successfully.\n");
 
}

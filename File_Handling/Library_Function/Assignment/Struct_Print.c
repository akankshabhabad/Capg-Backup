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

    fp = fopen("info.db", "rw");
    if(fp == NULL)
    {
        perror("open() failed");
        exit(1);
    }

    fread(arr, sizeof(struct EH), 10, fp);
    
    for(int i = 0;i < 10;i++)
    {
        printf("Entry no %d:\n", i + 1);
        printf("e_ident: ");
        for(int j = 0;j < 16;j++)
        {
            printf("%u ", arr[i].e_ident[j]);
        }

        printf("\n");
        printf("e_type: %d\n", arr[i].e_type);
        printf("e_machine: %d\n", arr[i].e_machine);
        printf("e_version: %d\n", arr[i].e_version);
        printf("e_entry: %u\n", arr[i].e_entry);
        printf("\n");
    }


    fclose(fp);

    return 0;

}

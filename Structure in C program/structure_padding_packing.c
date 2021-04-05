#include <stdio.h>
#include <stdlib.h>

#pragma pack(1) // it is use because remove the losing speace  problem .

struct employee1
{
    /* data */
    char c;
    short s;
    char cc;
    int i;
};

struct employee2
{
    /* data */
    int id;
    char name;
    float salary;
    int age;
};

int main()
{

    struct employee1 s1;
    struct employee2 s2;

    printf("Size of employee1 in bytes = %d\n", sizeof(s1));
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
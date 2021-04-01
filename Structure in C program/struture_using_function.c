#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct employee
{
    /* data */
    int code;
    float salary;
    char name[MAX];
};

void show(struct employee *e1)
{
    printf("%d\n", (*e1).code);
    printf("%f\n", (*e1).salary);
    printf("%s\n", (*e1).name);

    (*e1).code = 200; // when we use pointer than we change the value .
}

int main()
{

    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 100;
    strcpy(ptr->name, "Ashik");
    ptr->salary = 12000;

    show(ptr);

    printf("\n");
    printf("%d\n", ptr->code);

    return 0;
}
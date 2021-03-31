#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 1111;
    e1.salary = 12000;
    strcpy(e1.name, "ashik");
    //e1.name = "Ashik"; ===>it won't work. because character always store by array .
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s \n", e1.name);
    return 0;
}
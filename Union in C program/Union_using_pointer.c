#include <stdio.h>
#include <stdlib.h>

// Union using pointer in C program 

union abc
{
    int a;
    char b;
};

int main()
{
    union abc var;
    var.a = 97;
    union abc *p = &var;
    printf("The value is = %d\n", p->a);
    printf("The character  is = %c\n", p->b);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
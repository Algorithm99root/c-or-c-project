#include <stdio.h>
#include <stdlib.h>

union abc
{
    int a;
    char b;
};

int main()
{
    union abc var;
    var.a = 97;
    printf("The value is = %d\n", var.a);
    printf("The character  is = %c\n", var.b);
    printf("\n");
    printf("The address of int a is = %u\n ", &var.a);
    printf("The address of char b is = %u\n ", &var.b);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
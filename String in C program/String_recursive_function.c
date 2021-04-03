#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Reverse the string using Recursive function In C program.

void string(char *a)
{
    if (*a)  // when '\0'  come this statment will false .ASCII code the value of '\0'= 0 .
    {
        /* code */
        string(a + 1);
        putchar(*a);
    }
}

int main()
{
    char hack[MAX];
    char *p = hack;
    printf("Enter the string : ");
    gets(p);
    printf("\n");
    printf("Reverse the string : ");
    string(p);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
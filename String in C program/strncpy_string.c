//strncpy() in C program

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[6] = "Hello";
    char str2[5];
    strncpy(str2, str1, sizeof(str2));
    str2[sizeof(str2) - 1] = '\0';
    printf("%s\n", str2);
    printf("\n");
    printf("\n");
    system("pause");
    return (0);
}
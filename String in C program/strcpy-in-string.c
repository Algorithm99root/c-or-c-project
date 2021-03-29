// this is strcpy() example .

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 50

int main()
{
    char str[M] = "Ashik";
    char str1[M];
    strcpy(str1, str);
    printf("There is copy the value (str) to (str1) = %s ", str1);
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
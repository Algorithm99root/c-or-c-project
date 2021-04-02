#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strncat() function in C program
#define FIVE 5
#define MAX 100

// Note: strncat automatically adds NULL character at the end of the resultant string.

int main()
{
    char str1[FIVE], str2[MAX];
    strcpy(str1, "He");
    strcpy(str2, "llo!");
    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);
    printf("%s", str1);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Array string problem in C program

int main()
{
    char *fruits[] = {"2 Oranges", "2 Apples", "3 Bananas", "1 Pineapple"};
    if (strcmp(fruits[1], fruits[2]) < 0)
    {
        /* code */
        printf("%s is lesser than %s .", fruits[1], fruits[2]);
    }
    else if (strcmp(fruits[1], fruits[2]) > 0)
    {
        /* code */
        printf("%s is greater than %s .", fruits[1], fruits[2]);
    }
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
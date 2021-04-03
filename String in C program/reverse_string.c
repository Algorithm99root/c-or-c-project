#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main()
{

    char str[MAX];
    char hack[MAX];
    printf("Enter the strings : ");
    gets(hack);
    printf("\n");
    int length = strlen(hack);
    for (int i = 0; i < length; i++)
    {
        /* code */
        str[i] = hack[length - i - 1];
    }
    str[length] = '\0';
    printf("The Reverse of this string is = %s ", str);

    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
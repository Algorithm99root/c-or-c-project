#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[] = "Ashik";
    char *ptr = a;
    while (*ptr != '\0')
    {
        /* code */
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
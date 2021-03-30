#include <stdio.h>
#include <stdlib.h>

#define ASCII 256
#define MAX 100

int main()
{
    char str[MAX];
    char fequency[ASCII] = {0};
    printf("Enter the string : "); // In this string '\0' will not counted.
    gets(str);
    printf("\n");
    printf("+=============================+\n");
    printf("+=============================+\n");
    for (int i = 0; str[i]; i++)
    {
        /* code */
        fequency[str[i]]++;
    }
    for (int i = 0; str[i]; i++)
    {
        /* code */
        if (fequency[str[i]]) // if(0) = false
        {

            /* code */
            printf("%c => %d \n", str[i], fequency[str[i]]);
            fequency[str[i]] = 0;
        }
    }
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
// this is a program which give you the speciific address your given element.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 100

int main()
{
    printf("\t\t\t************************************\n");
    printf("\t\t\t* The Length of this Array is 100  *\n");
    printf("\t\t\t************************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    char str[M];
    printf("Enter your name : ");
    gets(str);
    int a;
    a = strlen(str); // strlen() function used for count the length of this input character.
    printf("My name is %s ", str);
    printf("\n");
    printf("\n");
    printf("The element of this String is = %d ", a);
    printf("\n");
    printf("\n");
    int hack;
    hack = (M - (M - a));
    for (int i = 0; i < hack; i++)
    {
        /* code */
        printf("The address of index[%d] = %u\n", i, &str[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}

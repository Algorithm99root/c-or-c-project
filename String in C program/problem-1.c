// this is a program which give you the speciific address your given element.


#include <stdio.h>
#include <stdlib.h>

#define M 50

int main()
{
    int element;
    printf("How much element you enter : ");
    scanf("%d", &element);
    char str[M];
    printf("Enter your name : ");
    scanf("%s", str);
    printf("My name is %s ", str);
    printf("\n");
    printf("\n");
    int hack;
    hack = (M - (M - element));
    for (int i = 0; i < hack; i++)
    {
        /* code */
        printf("%u\n", &str[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}

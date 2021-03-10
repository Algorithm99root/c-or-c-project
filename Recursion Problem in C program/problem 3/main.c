#include <stdio.h>
#include <stdlib.h>

void printpattern(int a); // Function prototype

int main()
{
    int num;
    printf("Enter the serial Number :");
    scanf("%d", &num);
    printpattern(num);
    printf("\n");
    system("pause");

    return 0;
}

void printpattern(int a) // a is argument
{

    if (a == 1)
    {
        /* code */
        printf("*\n"); // base condition
        return;
    }
    printpattern(a - 1); // Non-tail recursion

    for (int i = 0; i < (2 * a - 1); i++)
    {
        /* code */
        printf("*");
    }
    printf("\n");
}
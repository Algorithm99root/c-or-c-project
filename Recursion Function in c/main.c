#include <stdio.h>
#include <stdlib.h>

int factorial(int x);

int main()
{

    int a, calculation;
    printf("Enter the Factorial number = ");
    scanf("%d", &a);
    printf("\t\t\t|===========================|\n");
    printf("\t\t\t|===========================|\n");
    calculation = factorial(a);
    printf("\t\t\tThe number of %d factorial is = %d\n", a, calculation);
    printf("\n");
    system("pause");

    return 0;
}

int factorial(int x)
{
    if ((x == 0) || (x == 1))
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
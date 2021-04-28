#include <stdio.h>
#include <stdlib.h>

int power(int base, int exp)
{
    if (exp == 1)
    {
        /* code */
        return base;
    }
    else
    {
        return base * power(base, exp - 1);
    }
}

int main()
{
    int base, exp;
    printf("Enter the base and expension :\n");
    scanf("%d\n%d", &base, &exp);
    printf("\n");
    printf("The result is = %d ", power(base, exp));

    return 0;
}
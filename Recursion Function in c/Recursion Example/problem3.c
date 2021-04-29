#include <stdio.h>
#include <stdlib.h>

// output is 7

int fun(int n)
{
    if (n < 1)
    {
        /* code */
        return n;
    }

    return fun(n / 2) + fun(n / 2) + 1;
}

int main()
{

    int n = 6;
    printf("%d", fun(n));
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
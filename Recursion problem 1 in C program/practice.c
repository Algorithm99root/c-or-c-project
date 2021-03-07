#include <stdio.h>
#include <stdlib.h>

int fun(int a); // Function Prototype

int main()
{
    int n = 4,num;
    num = fun(n);
    printf("%d", num); // Function and the pass the Arguments
    printf("\n");
    system("pause");

    return 0;
}

int fun(int a)
{

    if (a == 0)
    {
        /* code */
        return 1;
    }
    else
    {
        return 7 + fun(a - 2);
    }
}
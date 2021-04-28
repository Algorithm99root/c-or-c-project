#include <stdio.h>
#include <stdlib.h>

// Sum of all digits

int sum_digits(int n)
{
    if (n < 10)
    {
        /* code */
        return n;
    }
    else
    {
        return n % 10 + sum_digits(n / 10);
    }
}

int main()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    printf("\n");
    printf("The sum of all digits are = %d ", sum_digits(n));

    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
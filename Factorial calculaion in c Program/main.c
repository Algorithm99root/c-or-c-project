#include <stdio.h>
#include <dos.h>

int main()
{
    int i, n, factorial = 1;
    printf("Enter the Number of Factorial = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        /* code */
        factorial *= i;
    }
    printf("===============================\n");
    printf("The factorial number of %d is %d\n", i, factorial);

    system("pause");
    return 0;
}
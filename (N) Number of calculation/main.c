#include <stdio.h>

//The program is Written for Calculation N number of all Sum

int main()
{
    int i = 0, sum = 0, n;
    printf("Enter the value of N number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        sum += i;
    }
    printf("\n");
    printf("============================\n");
    printf("============================\n");
    printf("N number of All value sum is = %d", sum);

    return 0;
}
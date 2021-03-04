#include <stdio.h>

int main()
{
    int i, num, prime = 0;
    printf("==============================\n");
    printf("Enter the Number : ");
    scanf("%d", &num);
    printf("===============================\n");
    for (i = 2; i < num; i++)
    {
        /* code */
        if (num % i == 0)
        {
            /* code */
            prime++;
            break;
        }
    }

    if (prime == 0)
    {
        /* code */
        printf("\n");
        printf("This number (%d) is prime number .\n", num);
    }
    else
    {
        printf("\n");
        printf("This number (%d) is not prime number .\n", num);
    }

    return 0;
}
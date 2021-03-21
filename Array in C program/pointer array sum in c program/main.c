#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M;
    printf("Enter the value of length : ");
    scanf("%d", &M);
    int a[M];
    int sum = 0, *p;
    p = &a[0];
    printf("\n");
    printf("Enter the Value of all element :\n ");
    for (int i = 0; i < M; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (int i = 0; i < M; i++)
    {
        /* code */
        sum = sum + *p;
    }

    printf("Sum is = %d ", sum);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define HACK (a + N - 1)

int main()
{
    int N;
    printf("The length of this array : ");
    scanf("%d", &N);
    printf("\n");
    int a[N];
    int sum = 0, *p;
    printf("Enter the element of this array : ");
    for (p = a; p <= HACK; p++)
    {
        /* code */
        scanf("%d", p); // p = &a[0];
    }

    for (p = a; p <= HACK; p++)
    {
        /* code */
        sum += *p;
    }
    printf("\n");
    printf("Sum is %d .", sum);

    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
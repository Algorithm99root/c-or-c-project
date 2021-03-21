#include <stdio.h>
#include <stdlib.h>

#define HACK (a + N - 1)

int main()
{
    int N;
    printf("Enter the length of this array : ");
    scanf("%d", &N);
    int a[N], *p;
    printf("\n");
    printf("Enter the all element : ");
    for (p = a; p <= HACK; p++)
    {
        /* code */
        scanf("%d", p);
    }
    printf("\n");
    printf("\n");
    printf("All the element of Array = ");
    for (p = a; p <= HACK; p++)
    {
        /* code */
        printf("%d ", *p);
    }

    printf("\n");
    printf("\n");
    printf("Reverse of all element is = ");
    for (p = HACK; p >= a; p--)
    {
        /* code */
        printf("%d ", *p);
    }
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
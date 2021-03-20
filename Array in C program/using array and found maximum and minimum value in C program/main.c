#include <stdio.h>
#include <stdlib.h>

#define HACK 50

void minMax(int arr[], int len, int *MAX, int *MIN);
int main()
{
    int a[HACK];
    int length;
    printf("Enter the length of the array : ");
    scanf("%d", &length);
    printf("\n");
    for (int i = 0; i < length; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    int min, max;
    minMax(a, length, &max, &min);
    printf("\n");
    printf("The Maximum value in this array is = %d \n", max);
    printf("\n");
    printf("The Minimum value in this array is = %d ", min);
    printf("\n");
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}

void minMax(int arr[], int len, int *MAX, int *MIN)
{
    *MAX = *MIN = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < *MIN)
        {
            /* code */
            *MIN = arr[i];
        }
        if (arr[i] > *MAX)
        {
            /* code */
            *MAX = arr[i];
        }
    }
}

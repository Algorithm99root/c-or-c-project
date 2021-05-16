#include <stdio.h>
#include <conio.h>

void main()
{
    int arr1[100];
    int i, j, k, n;

    printf("\n\nFind maximum and minimum element in an array :\n");
    printf("--------------------------------------------------\n");

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        /* code */
        for (k = 0; k < n - 1; k++)
        {
            /* code */
            if (arr1[k] >= arr1[k + 1])
            {
                /* code */
                j = arr1[k + 1];
                arr1[k + 1] = arr1[k];
                arr1[k] = j;
            }
        }
    }
    printf("\nElements of array in sorted ascending order: \n");
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr1[i]);
    }

    printf("\n\n");
    getch();
}

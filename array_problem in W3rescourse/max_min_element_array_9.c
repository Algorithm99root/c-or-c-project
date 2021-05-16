#include <stdio.h>
#include <conio.h>

void main()
{
    int arr1[100], arr_2[100];
    int n, i, j, ctr;

    printf("\n\nCount frequency of each element of an array:\n");
    printf("------------------------------------------------\n");

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

   
    for (int i = 1; i < n; i++)
    {
        if (arr1[0] < arr1[i])
        {
            arr1[0] = arr1[i];
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        if (arr1[n-1] > arr1[i])
        {
            arr1[n-1] = arr1[i];
        }
    }

    //arr1[1] = arr1[0];

    printf("Maximum elementn is  = %d\n", arr1[0]);
    printf("Minimum element is  = %d", arr1[n - 1]);

    printf("\n\n");
    getch();
}

#include <stdio.h>
#include <stdlib.h>

void printArry(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("The Element %d is = %d\n", i + 1, ptr[i]);
    }

    ptr[2] = 10101; // In array , we change the value outside for this type..
}

int main()
{
    int arr[] = {1, 22, 33, 445, 556, 77, 88, 99, 999, 3333};
    printArry(arr, 10);
    printf("\n");
    printf("The Value of arr[2] is = %d\n", arr[2]);
    printf("\n");
    system("pause");
    return 0;
}
// This is 3D dimonsonal Array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][2][2] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100, 110, 120}; // (3) means three 2D array and
    // (2) means two 1D array
    // (2) means Two elements for 1D array
    printf("%d ", ***a);
    printf("%d ", *(**a + 1));
    printf("%d ", **(*a + 1));
    printf("%d ", *(*(*a + 1) + 1));
    printf("%d ", ***(a + 1));
    printf("%d ", *(**(a + 1) + 1));
    printf("%d ", **(*(a + 1) + 1));
    printf("%d ", *(*(*(a + 1) + 1) + 1));
    printf("%d ", ***(a + 2));
    printf("%d ", *(**(a + 2) + 1));
    printf("%d ", **(*(a + 2) + 1));
    printf("%d ", *(*(*(a + 2) + 1) + 1));
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
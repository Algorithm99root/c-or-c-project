#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main()
{
    int array[MAX] = {2, 3, 55, 6};

    int index = 2;
    int N = 4;

    for (int i = 0; i < N; i++)
    {
        /* code */
        printf("array[%d] = %d \n", i, array[i]);
    }
    printf("\n");
    for (int i = N; i >= index; i--)
    {
        /* code */
        array[i + 1] = array[i];
    }
    int newValue = 11;
    array[index] = newValue;
    N++;
    printf("Insertion of an given index of an array?\n\n");

    for (int i = 0; i < N; i++)
    {
        /* code */
        printf("array[%d] = %d \n", i, array[i]);
    }
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Insertion at the beginning of an array
// Using for loop 

#define MAX 5

int main()
{
    int array[MAX] = {3, 4, 5, 9};
    int N = 4;
    printf("Print the all element : \n");
    for (int i = 0; i < N; i++)
    {
        /* code */
        printf("array[%d] = %d .\n", i, array[i]);
    }
    printf("\n");
    printf("\n");
    if (MAX == N)
    {
        /* code */
        printf("The array is full...thats why you cann't store any element .");
    }
    else if (MAX != N)
    {
        /* code */
        printf("Insertion of an array :\n");
        for (int i = N; i >= 0; i--)
        {
            /* code */
            array[i + 1] = array[i];
        }
        int new_value = 39;
        array[0] = new_value;
        N++;
        for (int i = 0; i < N; i++)
        {
            /* code */
            printf("array[%d] = %d .\n", i, array[i]);
        }
    }

    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}

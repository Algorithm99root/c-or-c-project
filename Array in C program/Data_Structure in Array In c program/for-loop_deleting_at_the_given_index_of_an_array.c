#include <stdio.h>
#include <stdlib.h>

//deleting element at the given index for an array
// using for loop

int main()
{

    int array[] = {2, 3, 4, 5, 6};
    int N = 5;
    int index = 2;
    printf("print all the element of this array : \n");
    for (int i = 0; i < N; i++)
    {
        /* code */
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");
    printf("\n");
    printf("Deleting element at the given of this array : \n");
    for (int i = index+1 ; i < N; i++)
    {
        /* code */
        array[i - 1] = array[i];
    }
    N--;
    for (int i = 0; i < N; i++)
    {
        /* code */
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
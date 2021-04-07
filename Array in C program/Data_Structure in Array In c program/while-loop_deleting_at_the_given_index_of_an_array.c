#include <stdio.h>
#include <stdlib.h>

//deleting element at the given index for an array
// using for loop
//while-loop_deleting_at_the_given_index_of_an_array

int main()
{

    int array[] = {32, 44, 55, 66, 77, 77};
    int N = 6;
    int index = 2;
    printf("print all the element of this array : \n");
    for (int i = 0; i < N; i++)
    {
        /* code */
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");
    printf("\n");
    printf("Deleting element at the given  index of this array : \n");
    int j = index + 1;
    while (j < N)
    {
        /* code */
        array[j - 1] = array[j];
        j++;
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
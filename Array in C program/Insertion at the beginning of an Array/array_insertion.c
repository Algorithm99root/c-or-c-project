#include <stdio.h>
#include <stdlib.h>

#define MAX 5
#define TEN 10
int main()
{
    int array[MAX] = {2, 3, 6, 7};
    int N = 4;

    for (int i = 0; i < N; i++)
    {
        /* code */
        printf("array[%d] = %d.\n", i, array[i]);
    }
    printf("\n");
    printf("\n");
    

    /* code */
    if (MAX == N)
    {
        /* code */
        printf("This array is full...that's why you can't store any element.");
    }
    else if (MAX != N)
    {
        printf("The new array is : \n\n");
        /* code */
        for (int i = N; i >= 0; i--)
        {
            /* code */
            array[i + 1] = array[i];
        }

        int num = 122;
        array[0] = num;
        N++;
        for (int i = 0; i < N; i++)
        {
            /* code */
            printf("array[%d] = %d \n", i, array[i]);
        }
    }

    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
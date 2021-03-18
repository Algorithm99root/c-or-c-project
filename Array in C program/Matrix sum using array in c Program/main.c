//write a program that reads a 5X5 array of integers and then prints the
// row sum and the column sum ?

#include <stdio.h>
#include <stdlib.h>

#define M 5     // M is Macro template and 5 is a macro Expansion
#define SONNO 0 // SONNO is a macro template and 0 is a macro Expansion

int main()
{
    int sum = 0;
    int arr[M][M] = {{8, 9, 3, 0, 10},
                     {3, 5, 17, 1, 1},
                     {2, 8, 6, 23, 1},
                     {15, 7, 3, 2, 9},
                     {6, 14, 2, 6, 0}};

    //row sum
    printf("Row total : ");
    for (int i = 0; i < M; i++)
    {
        /* code */
        for (int j = 0; j < M; j++)
        {
            /* code */
            sum = sum + arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    // Column Sum
    printf("\nColumn total : ");
    for (int j = 0; j < M; j++)
    {
        /* code */
        for (int i = 0; i < M; i++)
        {
            /* code */
            sum = sum + arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
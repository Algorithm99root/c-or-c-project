// 2 Dimonsonal array and it using for Reverse the all number .

#include <stdio.h>
#include <stdlib.h>

#define M 4
#define N 5
#define L 4
#define EQUAL ==

int main()
{
    int num;
    int arr[M][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printf("\t\t\t|--------------------------------------------------------------|\n");
    printf("\t\t\t| 2 Dimonsonal array and it using for Reverse the all number   |\n");
    printf("\t\t\t|--------------------------------------------------------------|\n");

    for (int i = 0; i < M; i++)
    {
        if ((i EQUAL 0) || (i % 2 EQUAL 0))
        {
            /* code */
            for (int j = 0; j < N; j++)
            {
                /* code */
                printf("%d ", arr[i][j]);
            }
        }
        else
        {

            for (int j = L; j >= 0; j--)
            {
                /* code */
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
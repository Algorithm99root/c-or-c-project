#include <stdio.h>
#include <stdlib.h>

#define M 5
#define SONNO 0

int main()
{
    int arr[M][M];
    int sum = 0;
    printf("\t\t\t Enter the Input ?\n");
    printf("\t\t\t For Calculate the Matrix (5x5)?\n");
    printf("\n");
    for (int i = SONNO; i < M; i++)
    {
        /* code */
        for (int j = SONNO; j < M; j++)
        {
            /* code */
            scanf("%d", &arr[i][j]);
        }
    }
     printf("\n");
     printf("\n");
    
    // Row sum
    printf("Row total : ");
    for (int i = SONNO; i < M; i++)
    {
        /* code */
        for (int j = SONNO; j < M; j++)
        {
            /* code */
            sum = sum + arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    // Column sum
    printf("\nColumn total : ");
    for (int j = SONNO; j < M; j++)
    {
        /* code */
        for (int i = SONNO; i < M; i++)
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
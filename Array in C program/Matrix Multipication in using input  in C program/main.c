#include <stdio.h>
#include <stdlib.h>

#define MAX 50
#define NOTEQUAL !=

int main()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int sum = 0;
    printf("\t\t\t This is program for Multipy 2 matrix ?\n");
    printf("\t\t\t---------------------------------------\n");
    printf("\n");
    printf("Enter the matrix rows and columns for a : ");
    scanf("%d %d", &arows, &acolumns);
    printf("Enter the matrix a : \n");
    for (int i = 0; i < arows; i++)
    {
        /* code */
        for (int j = 0; j < acolumns; j++)
        {
            /* code */
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("Enter the matrix rows and columns for b :");
    scanf("%d %d", &brows, &bcolumns);
    if (brows NOTEQUAL acolumns)
    {
        /* code */
        printf("Sorry ! we cannot multipy the matrix a and b ");
    }
    else
    {
        printf("Enter the matrix b : \n");
        for (int i = 0; i < brows; i++)
        {
            /* code */
            for (int j = 0; j < bcolumns; j++)
            {
                /* code */
                scanf("%d", &b[i][j]);
            }
        }
        printf("\n");

        for (int i = 0; i < arows; i++)
        {
            /* code */
            for (int j = 0; j < bcolumns; j++)
            {
                /* code */
                for (int k = 0; k < brows; k++)
                {
                    /* code */
                    sum = sum + a[i][k] * b[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }
        printf("Resultant matrix\n");
        for (int i = 0; i < arows; i++)
        {
            /* code */
            for (int j = 0; j < bcolumns; j++)
            {
                /* code */
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
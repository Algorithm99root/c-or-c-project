#include <stdio.h>
#include <stdlib.h>

#define CITY 2
#define WEEK 7

// C program to store temperature of two cities of a week and display it.

int main()
{
    int arr[CITY][WEEK];
    for (int i = 0; i < CITY; i++)
    {
        /* code */
        for (int j = 0; j < WEEK; j++)
        {
            /* code */
            printf("City %d , day %d = ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    system("cls");
    printf("\n");
    printf("\t\t\tDisplaying the city , day temperture ?");
    printf("\n");
    for (int i = 0; i < CITY; i++)
    {
        /* code */
        for (int j = 0; j < WEEK; j++)
        {
            /* code */
            printf("City %d , day %d = %d .\n", i + 1, j + 1, arr[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
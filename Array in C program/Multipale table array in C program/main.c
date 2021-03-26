#include <stdio.h>
#include <stdlib.h>

#define M 10
#define N 3
#define X 0
#define Y 1
#define Z 2

int main()
{
    int multitable[N][M];
    for (int i = X; i < M; i++)
    {
        /* code */
        multitable[X][i] = 2 * (i + 1);
        multitable[Y][i] = 5 * (i + 1);
        multitable[Z][i] = 10 * (i + 1);
    }

    for (int i = X; i < M; i++)
    {
        /* code */
        printf("2 X %d = %d \t 5 X %d = %d \t 10 X %d = %d \n", i + 1, multitable[X][i], i + 1, multitable[Y][i], i + 1, multitable[Z][i]);
    }
    printf("\n");
    printf("\n");

    system("pause");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void SumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = *sum / 2;
}

int main()
{
    int i, j, sum;
    float avg;
    printf("Enter the Value of i = ");
    scanf("%d", &i);
    printf("Enter the value of j = ");
    scanf("%d", &j);
    SumAndAvg(i, j, &sum, &avg);
    printf("\n");
    system("color 0A");
    printf("\t\t\t|===============================|\n");
    printf("\t\t\t|===============================|\n");
    printf("The Value of Sum = %d\n", sum);
    printf("The value of Avarge = %f\n", avg);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

float average(int a, int b, int c); // Function prototype

int main()
{

    int num1, num2, num3;
    printf("Enter the first number :");
    scanf("%d", &num1);
    printf("Enter the second number :");
    scanf("%d", &num2);
    printf("Enter the third number :");
    scanf("%d", &num3);
    printf("\t\t\t|================================|\n");
    printf("\t\t\t|================================|\n");
    printf("\n");
    printf("The average number is (%d,%d,%d) and the calculation is =%f\n", num1, num2, num3, average(num1, num2, num3));
    printf("\n");
    system("pause");

    return 0;
}

float average(int a, int b, int c)
{
    int result;
    result = (a + b + c) / 3;
    return result;
}
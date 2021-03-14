#include <stdio.h>

int main()
{

    float tax = 0, income;
    printf("\t\t\t -----------------------------\n");
    printf("\t\t\t |                           |\n");
    printf("\t\t\t | Bangladesh Tax Calculater |\n");
    printf("\t\t\t |                           |\n");
    printf("\t\t\t -----------------------------\n");


    printf("Enter your income\n"); 
    scanf("%f", &income);

    if (income >= 400000 && income < 500000)
    {
        /* code */
        tax = tax + 0.10 * (income - 400000);
    }
    if (income >= 500000 && income < 600000)
    {
        /* code */
        tax = tax + 0.15 * (income - 500000);
    }
    if (income >= 600000 && income < 3000000)
    {
        /* code */
        tax = tax + 0.20 * (income - 600000);
    }
    if (income >= 3000000 && income <= 10000000)
    {
        /* code */
        tax = tax + 0.25 * (income - 3000000);
    }
    if (income >= 10000000)
    {
        /* code */
        tax = tax + 0.30 * (income - 10000000);
    }
    printf("\t\t\t---------------------------------------------\n");
    printf("\t\t\t---------------------------------------------\n");
    printf("\t\t\tYour net income tax to be paid by 28th of this month is %f\n", tax);

    return 0;
}
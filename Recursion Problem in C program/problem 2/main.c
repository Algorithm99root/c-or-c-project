
// Reverse for n natural number

#include <stdio.h>
#include <stdlib.h>

void Tailrecursion(int a); // Function Prototype

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("\t\t\t|==========================|\n");
    printf("\t\t\t|==========================|\n");
    Tailrecursion(num); // Function call
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}

void Tailrecursion(int a) // The Argument a
{
    if (a <= 0)
    {
        return;
    }
    else
    {
        printf("%d ", a);
        Tailrecursion(a - 1);
    }
}
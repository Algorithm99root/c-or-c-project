#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b); // Function Prototype

int main()
{
    system("color 04");
    int x, y;
    printf("Enter the Value of X = ");
    scanf("%d", &x);
    printf("Enter the Value of Y = ");
    scanf("%d", &y);
    printf("\t\t\t|===================================|\n");
    printf("\t\t\t|===================================|\n");
    printf("The Value of X and Y before swaping = %d and %d \n", x, y);
    swap(&x, &y); // Function call
    printf("\n");
    printf("The value of X and Y after seaping = %d and %d \n", x, y);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}

void swap(int *a, int *b) // Call by reference
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
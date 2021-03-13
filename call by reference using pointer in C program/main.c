#include <stdio.h>
#include <stdlib.h>

void reference(int* x); // Function prototype and a is formal argument

int main()
{
    int a;
    printf("Enter the Value Of A = ");
    scanf("%d", &a);
    reference(&a); // Call Function and a is actual argument
    printf("The value of A is = %d\n", a);
    printf("\n");
    system("pause");
    return 0;
}

void reference(int* x)
{

    *x = *x + 1;
}
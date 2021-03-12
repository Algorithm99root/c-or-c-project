#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 0A");
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    printf("The Address of X is = %d\n", &x);
    printf("The Value of P is = %d\n", *p);
    printf("The Address of q(poineter) = %d\n", *q);
    printf("The real address of q is = %d\n", &q);
    printf("The Value of q = %d\n", *(*q));
    printf("The address of r(pointer) = %d\n", *(*r));
    printf("The real address of r is = %d\n", &r);
    printf("The Value of r is = %d\n", ***r);
    printf("The address of s(pointer) is = %d\n", *(*(*s)));
    printf("The real address of s is = %d\n", &s);
    printf("The Value of s is = %d\n", *(*(*(*s))));
    ****s = 10;
    printf("\n");
    printf("The value of X is = %d\n", x + 3);
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
#include <stdio.h>

int main()
{

    // Increment and Decrement program

    int a = 12, b;
    b = a-- + --a + a--;
    printf("A is = %d\n", a);
    printf("B is = %d", b);

    return 0;
}
//
//write a program to print numbers from 1 to 10 in such as a way that when number is odd, add 1 and when number is even, subtract 1.
// C program

#include <stdio.h>
#include <stdlib.h>
void odd();
void even();
int n = 1;
void odd()
{
    if (n <= 10)
    {
        /* code */
        printf("%d ", n + 1);
        n++;
        even();
    }
    return;
}
void even()
{
    if (n <= 10)
    {
        /* code */
        printf("%d ", n - 1);
        n++;
        odd();
    }
    return;
}
int main()
{
    odd();
    printf("\n");
    system("pause");
    return 0;
}
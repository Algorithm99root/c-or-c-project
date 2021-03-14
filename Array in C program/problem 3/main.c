#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    printf("\t\t\t|=================================|\n");
    printf("\t\t\t|=================================|\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("Enter the marks Of Student %d = ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    printf("\n");
    system("cls");
    printf("\n");
    printf("\n");
    system("color 0A");

    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("The Marks of Student %d is = %d\n", i + 1, marks[i]);
    }
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
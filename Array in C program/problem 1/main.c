#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[5];
    printf("Enter the Marks for Student 1 = ");
    scanf("%d", &marks[0]);
    printf("Enter the Marks for Student 2 = ");
    scanf("%d", &marks[1]);
    printf("Enter the Marks for Student 3 = ");
    scanf("%d", &marks[2]);
    printf("Enter the Marks for Student 4 = ");
    scanf("%d", &marks[3]);
    printf("Enter the Marks for Student 5 = ");
    scanf("%d", &marks[4]);
    printf("\t\t\t|+==================================+|\n");
    printf("\t\t\t|+==================================+|\n");
    printf("The marks Student 1 ia = %d \n", marks[0]);
    printf("The marks Student 2 ia = %d \n", marks[1]);
    printf("The marks Student 3 ia = %d \n", marks[2]);
    printf("The marks Student 4 ia = %d \n", marks[3]);
    printf("The marks Student 5 ia = %d \n", marks[4]);
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
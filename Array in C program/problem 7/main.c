#include <stdio.h>
#include <stdlib.h>

// This is a Program 2D Dimonsonal

void display(int marks[3][2])

{

    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            printf("The marks of student %d is for Number %d subject : %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
}

int main()
{
    int n_students = 3;
    int n_subjects = 2;

    int marks[3][2]; // 2D Dimonsoal Array In C program

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            /* code */
            printf("Enter the marks student %d is for number  %d subject = ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    system("cls");
    system("color 0A");
    printf("\n");
    printf("\n");
    display(marks);
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
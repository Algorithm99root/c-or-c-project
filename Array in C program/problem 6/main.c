#include <stdio.h>
#include <stdlib.h>

int main()
{

    int password;
    int marks[3][5];
    printf("Enter the password : ");
    scanf("%d", &password);
    if (password == 123456)
    {
        system("cls");
        int n_students = 3;
        int n_subjects = 5;
        /* code */
        for (int i = 0; i < n_students; i++)
        {
            /* code */
            for (int j = 0; j < n_subjects; j++)
            {
                /* code */
                printf("Enter the marks students %d in subject %d =  ", i + 1, j + 1);
                scanf("%d", &marks[i][j]);
            }
        }
        system("cls");
        printf("\n");
        printf("\n");
        system("color 0A");
        printf("\t\t\t|====================================|\n");
        printf("\t\t\t|====================================|\n");
        printf("\t\t\t|====================================|\n");
        printf("\n");
        printf("\n");

        for (int i = 0; i < n_students; i++)
        {
            /* code */
            for (int j = 0; j < n_subjects; j++)
            {
                /* code */
                printf("The marks of students %d in subject %d is = %d\n", i + 1, j + 1, marks[i][j]);
            }
        }
    }
    else
    {

        printf("You enter the worng password .....please try again.!");
    }

    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
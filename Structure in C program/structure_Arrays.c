#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define LENGTH 2

struct employee
{
    int code;
    float salary;
    char name[MAX];
};

int main()
{
    struct employee hack[LENGTH];

    for (int i = 0; i < LENGTH; i++)
    {
        /* code */
        printf("Enter detailes of Employee %d ==>\n\n", i + 1);
        printf("Enter name : ");
        gets(hack[i].name);

        printf("Enter the Code number : ");
        scanf("%d", &hack[i].code);

        printf("Enter the Salary : ");
        scanf("%f", &hack[i].salary);
        printf("\n");
        fflush(stdin);
    }
    system("cls");
    printf("\t\t\t+===============================+\n");
    printf("\t\t\t+===============================+\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < LENGTH; i++)
    {
        /* code */
        printf("Detailes of Employee %d is ====>\n",i+1);
        printf("The Employee name is = %s\n", hack[i].name);
        printf("The Employee code is = %d\n", hack[i].code);
        printf("The Employee Salary is = %.2f\n", hack[i].salary);
        printf("\n");
    }

    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
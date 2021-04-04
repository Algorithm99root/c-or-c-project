#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    /* data */
    float salary;
    int age;
};

int manager()
{
    struct employee manager;
    // manager.age = 23;
    if (manager.age <= 30 && manager.age >= 15)
    {
        /* code */
        manager.salary = 50000;
    }
    else if (manager.age > 30)
    {
        /* code */
        manager.salary = 30000;
    }

    return manager.salary;
}

int main()
{
    struct employee hack1;
    struct employee hack2;

    printf("Enter the 1st Employee salary: ");
    scanf("%f", &hack1.salary);
    printf("Enter the 2st Employee salary: ");
    scanf("%f", &hack2.salary);
    //printf("Enter the Manager Salary : ");
    // scanf("%f", &manager.salary);
    printf("\n");
    printf("The 1st Company Salary is = %.2f\n", hack1.salary);
    printf("The 2st Company Salary is = %.2f\n", hack2.salary);
    printf("The Manager Salary is = %.2f\n", manager());
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[5];

    printf("\t\t\t++=========================================++\n");
    printf("\t\t\t++=========================================++\n");
    printf("\n");

    for (int i = 0; i < 5; i++) // This loop for take input from user
    {
        /* code */
        printf("Enter the value of Student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\n");
    printf("\n");
    printf("\t\t\t++$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$++\n");
    printf("\t\t\t++$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$++\n");
    printf("\n");
    printf("\n");

    system("color 0A"); // This is use for change the color in Terminal

    for (int i = 0; i < 5; i++) // this loop is for print the value which is take from user
    {
        /* code */
        printf("The value of marks student %d is = %d\n", i + 1, marks[i]);
    }

    printf("\n");
    printf("\n");
    system("pause"); // This is use for Pause the .exe file
    return 0;
}
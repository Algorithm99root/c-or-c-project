#include <stdio.h>
#include <stdlib.h>

#define MAX 5
struct student
{
    /* data */
    int number;
    double hack;
};

int main()
{
    struct student marks[MAX];
    for (int i = 0; i < MAX; i++)
    {
        /* code */
        printf("Enter The number %d student marks = ", i + 1);
        scanf("%d", &marks[i].number);
    }
    printf("\n");
    //system("cls");
    printf("\n");
    for (int i = 0; i < MAX; i++)
    {
        /* code */
        printf("The number %d marks is = %d.\n", i + 1, marks[i].number);
    }
    printf("\n");
    printf("\n");
    printf("The size of this structure is = %ld \n", sizeof(struct student)); // this way ,we calculate the size of this datatype
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
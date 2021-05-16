#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 10

int main()
{

    int a[MAX];
    printf("Input 10 elements in this array : \n");
    for (int i = 0; i < MAX; i++)
    {
        /* code */
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    printf("\nElements in array are : ");
    for (int i = 0; i++ < MAX; printf("%d ", a[i - 1]));
        

    printf("\n");
    printf("\n");
    getch();

    return 0;
}
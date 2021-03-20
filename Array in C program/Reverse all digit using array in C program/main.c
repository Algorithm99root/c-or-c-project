
// the program is using one dimonsonal array and take input and reverse the all digit .

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the length of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("\n");
    printf("Enter the all element is : \n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    system("cls");
    printf("\n");
    printf("\n");
    printf("All element is :\n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Reverse of all element is : \n");
    for (int i = n - 1; i >= 0; i--)
    {
        /* code */
        printf("%d ", a[i]);
    }

    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
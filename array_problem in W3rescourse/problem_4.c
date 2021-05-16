#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int arr_1[100], arr_2[100], n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    printf("Input %d element in this array : \n", n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("element - %d :",i);
        scanf("%d", &arr_1[i]);
    }
    printf("\n");
    for (int i = 0; i++ < n; arr_2[i - 1] = arr_1[i - 1]);
        
    printf("\nThe elements stored in the first array are :");
    for (int i = 0; i++ < n; printf("%d ", arr_1[i - 1]));

    printf("\nThe elements copied into the second array are :");
    for (int i = 0; i++ < n; printf("%d ", arr_2[i - 1]));
    printf("\n\n");
    getch();
        

    return 0;
}
#include <stdio.h>
#include <conio.h>

void main()
{
    int arr1[100], even[100], odd[100];
    int i, j = 0, k = 0, n;

    printf("\n\nFind maximum and minimum element in an array :\n");
    printf("--------------------------------------------------\n");

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            even[j] = arr1[i];
            j++;
        }
        else
        {
            /* code */
            odd[k] = arr1[i];
            k++;
        }
    }

    printf("\nThe Even elements are : \n");
    for (i = 0; i++ < j; printf("%d ", even[i - 1]));

    
    printf("\nThe odd elements are : \n");
    for (i = 0; i++ < k; printf("%d ", odd[i - 1]));
        
        

    printf("\n\n");
    getch();
}

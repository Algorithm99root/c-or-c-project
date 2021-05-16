#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{

    int arr[MAX], new_value, n;
    int hold ,j, k;
    printf("Input the size of array :\n");
    scanf("%d", &n);

    printf("Inserted the new value : ");
    scanf("%d", &new_value);

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("element - %d :", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("printing array before insertion : \n");

    for (int i = 0; i++ < n; printf("%d ", arr[i - 1]));
        

    for (int i = n; i-- >= 0; arr[i + 2] = arr[i + 1]);
        

    hold = new_value;
    arr[0] = hold;
    n++;

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (k = 0; k < n - 1; k++)
        {
            /* code */
            if (arr[k] >= arr[k + 1])
            {
                /* code */
                j = arr[k + 1];
                arr[k + 1] = arr[k];
                arr[k] = j;
            }
        }
    }
    printf("\n\nPrinting array after insertion :\n ");
    for (int i = 0; i++ < n; printf("%d ", arr[i - 1]));
        
    printf("\n\n");

    return 0;
}
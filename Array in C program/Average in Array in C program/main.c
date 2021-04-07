#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main()
{
    int arr[MAX];
    int length, sum = 0;
    printf("Enter the length of this array : ");
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {
        /* code */
        printf("Enter the element : ");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\t\t\t The Average in thr below ? \n");
    printf("\n");
    printf("The Average of this array is = %d ", sum / length);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}

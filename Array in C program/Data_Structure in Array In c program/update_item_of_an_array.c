
#include <stdio.h>
#include <stdlib.h>

// Updating value at give position of an array
// Using for-loop

int main()
{
    int length, position, item;
    printf("Give the length of this array : ");
    scanf("%d", &length);
    printf("Enter the position where you enter the element : ");
    scanf("%d", &position);
    printf("Enter the item : ");
    scanf("%d", &item);
    int array[length];
    printf("\n");
    printf("Enter the item of this array :\n");
    for (int i = 0; i < length; i++)
    {
        /* code */
        scanf("%d", &array[i]);
    }
    printf("\n");
    printf("\n");
    array[position - 1] = item;
    printf("Update all item is below : \n");
    printf("\n");
    for (int i = 0; i < length; i++)
    {
        /* code */
        printf("The update array[%d] = %d\n", i, array[i]);
    }
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
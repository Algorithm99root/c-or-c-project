#include <stdio.h>
#include <stdlib.h>

// searching an element of an array
// using for loop

#define MAX 5

int main()
{
    int array[MAX];
    printf("Enter the array of element : \n");
    for (int i = 0; i < MAX; i++)
    {
        /* code */
        scanf("%d", &array[i]);
    }

    int element;

    printf("Enter the element = ");
    scanf("%d", &element);
    printf("\n");
    printf("\n");
    printf("The all element is : \n");
    for (int i = 0; i < MAX; i++)
    {
        /* code */
        printf("Array[%d] = %d \n", i, array[i]);
    }
    printf("\n");
    int i = 0;
    int flag = 0;
    for (i = 0; i < MAX; i++)
    {
        /* code */
        if (array[i] == element)
        {
            /* code */
            flag = 1;
            break;
        }
        else if (array[i] != element)
        {
            /* code */
            break;
        }
    }

    if (flag == 1)
    {
        /* code */
        printf("Found element %d at position %d ", element, i + 1);
    }
    else
    {
        printf("This %d element is not found.\n", element);
    }
    

    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, a[100];

    printf("\n\nRead n number of values in an array and display it in reverse order:\n");
    printf("------------------------------------------------------------------------\n");

    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);

    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    printf("\nThe values store into the array are : \n");

    for ( i = 0; i++ < n;printf("%d ",a[i-1]));
   
    printf("\n\nThe values store into the array in reverse are :\n");

    for ( i = n-1 ; i-- >= 0; printf("%d ", a[i+1]));
    
    printf("\n\n");
    getch();
}
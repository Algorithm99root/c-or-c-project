// This  is a program for pointer

#include <stdio.h>
#include <stdlib.h>

void pointer(int a); // Function prototype

int main()
{
    int num;
    printf("Enter the value of pointer : ");
    scanf("%d", &num);
    pointer(num); // Function call
    printf("\n");
    system("pause");

    return 0;
}

void pointer(int a) // functon argument
{
    int *j; // this a varialble which store the value of a
    j = &a;
    printf("\t\t\t|===============RX ASHIK==============|\n");
    printf("\t\t\t|=====================================|\n");
    printf("Address of a = %u\n", &a);
    printf("Address of a = %u\n", j);
    printf("Address of j = %u\n", &j);
    printf("\n");
    printf("Value a = %d\n", a);
    printf("Value a = %d\n", *(&a));
    printf("Value a = %d\n", *j);
}

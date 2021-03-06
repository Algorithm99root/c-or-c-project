#include <stdio.h>
#include <stdlib.h>

int addnumber(int x); // Function prototype

int main()
{
    char choice;
    printf("\t\t\t|==================================|\n");
    printf("\t\t\t|==================================|\n");
    printf("Are you Interest to run this program(Y ? N) :");
    scanf("%c", &choice);
    if ((choice == 'y') || (choice == 'Y'))
    {
        /* code */
        int a, sum;
        printf("\n");
        printf("Enter the Natural number what are you want : ");
        scanf("%d", &a);
        printf("\n");
        sum = addnumber(a);
        printf(" The number of (%d) natural sum is = %d ", a, sum);
        printf("\n");
    }
    else if ((choice == 'n') || (choice == 'N'))
    {
        /* code */
        printf("\n");
        printf("Ok...As your Wish....And Have a good day...!");
    }
    printf("\n");
    system("pause");

    return 0;
}

int addnumber(int x)
{
    if (x != 0)
    {
        /* code */
        return x + addnumber(x - 1);
    }
    else
    {
        return x;
    }
}
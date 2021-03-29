// this is fflush(stdin) used in c program


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char str;
    printf("Enter the value of integer : ");
    scanf("%d", &num);
    fflush(stdin); // cleans the buffer 
    printf("Enter the value of character : ");
    scanf("%c", &str);

    printf("\n");
    printf("\n");

    printf("The integer value is = %d\n ", num);
    printf("The character is = %c\n", str);
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
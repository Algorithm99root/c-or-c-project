#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ashik.txt", "r");
    printf("the character is %c\n", fgetc(ptr));
    printf("the character is %c\n", fgetc(ptr));
    printf("the character is %c\n", fgetc(ptr));
    printf("the character is %c\n", fgetc(ptr));
    printf("the character is %c\n", fgetc(ptr));
    printf("the character is %c\n", fgetc(ptr));
    printf("the character is %c\n", fgetc(ptr));
    printf("the character is %c\n", fgetc(ptr));
    printf("\n");
    printf("\n");
    system("pause");
    fclose(ptr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char file_name[100];
    int num;
    int num2;
    printf("Enter the file name : \n");
    gets(file_name);
    printf("\n");
    ptr = fopen(file_name, "r");
    if (ptr == NULL)
    {
        /* code */
        printf("This file is not exist .");
    }
    else
    {
        /* code */

        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The  num value  is = %d\n", num);
        printf("The num2 value is = %d\n", num2);
    }

    return 0;
}
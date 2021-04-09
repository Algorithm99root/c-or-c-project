#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    int num;
    int num2;
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    printf("The  num value  is = %d\n", num);
    printf("The num2 value is = %d\n", num2);
    fclose(ptr);

    return 0;
}
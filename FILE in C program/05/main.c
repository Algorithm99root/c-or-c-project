#include <stdio.h>
#include <stdlib.h>
// putc() is use for giving element in file .

int main()
{
    FILE *ptr;
    ptr = fopen("ashik.txt", "w");
    putc('c',ptr);
    putc('c',ptr);
    putc('c',ptr);
    printf("\n");
    printf("\n");
    system("pause");
    fclose(ptr);

    return 0;
}
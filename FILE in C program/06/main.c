#include <stdio.h>
#include <stdlib.h>
// fgetc() is used for Reading file.
// fputc() is used for witting file.

int main()
{
    FILE *hack;
    hack = fopen("Ashik.txt", "r");
    char c = fgetc(hack);
    while (c != EOF) // EOF -> End of file
    {
        /* code */
        printf("%c", c);
        c = fgetc(hack);
    }
    printf("\n");
    printf("\n");
    system("pause");
    fclose(hack);
    return 0;
}
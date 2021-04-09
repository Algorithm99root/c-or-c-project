#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Give the integer to need you for table : ");
    scanf("%d", &num);
    FILE *hack;
    hack = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        fprintf(hack, "%d X %d = %d \n", num, i + 1, num * (i + 1));
    }
    fclose(hack);
    printf("Successfully table is printed.");
    

    return 0;
}
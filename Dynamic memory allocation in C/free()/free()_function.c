#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Dynamic memory allocation in C
// we use it looks like a array.
// using free() function

void gotoxy(int x, int y); // it use change the location in Console .

int main()
{
    int n = 6;
    int *hack;
    hack = (int *)calloc(n, sizeof(int));
    gotoxy(20, 11);
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("The element hack[%d] is = %d \n", i, hack[i]);
        gotoxy(20, 12 + i);
    }

    free(hack); // We can use free() function to deallocate the memory...

    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}

void gotoxy(int x, int y)
{
    COORD CRD;
    CRD.X = x;
    CRD.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CRD);
}
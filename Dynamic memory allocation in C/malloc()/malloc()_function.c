#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Dynamic memory allocation in C
// we use it looks like a array.
void gotoxy(int x, int y); // it use change the location in Console .

int main()
{
    int n = 6;
    int *hack;
    hack = (int *)malloc(n * sizeof(int));
    gotoxy(15, 10);
    printf("Enter the all element :\n");
    gotoxy(15, 11);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &hack[i]);
        gotoxy(15, 12 + i);
    }
    gotoxy(15, 18);
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("The  hack[%d] element is = %d\n", i, hack[i]);
        gotoxy(15, 19 + i);
    }

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
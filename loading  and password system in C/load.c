#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y);

void loading_bar()
{
    int a;
    gotoxy(47, 10);
    for (int i = 0; i < 100; i++)
    {
        /* code */
        printf(" <- %d ->  %% Loading", i);
        for (int k = 0; k <= 8; k++)
        {
            printf(".");
            Sleep(50);
        }
        Sleep(80);
        system("cls");
        gotoxy(47, 10);
    }
}

void math()
{
    int x, y;
    printf("Enter the first value : ");
    scanf("%d", &x);
    printf("Enter the first value : ");
    scanf("%d", &y);
    printf("\n");
    printf("The Sum of this math  %d + %d = %d ", x, y, x + y);
}

int main()
{
    int pass;
    printf("Enter the password : ");
    scanf("%d", &pass);
    system("cls");

    if (pass == 123456)
    {
        /* code */
        loading_bar();
        system("cls");
        math();
    }
    else
    {
        printf("Wrong password ..\n");
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
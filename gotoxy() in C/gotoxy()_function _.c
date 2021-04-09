#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// this is gotoxy() in C 

void gotoxy(int x, int y);

int main()
{
    char name[20];
    gotoxy(8, 6);
    printf("Enter your name \n");
    gotoxy(8, 7);
    gets(name);
    gotoxy(8, 8);
    printf("Your name is %s .", name);
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
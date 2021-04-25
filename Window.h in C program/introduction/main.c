#include <windows.h>

// HINSTANCE is sttructure and hint,hprev,arg,ncmd is variable name (you can use any of name )

int WINAPI WinMain(HINSTANCE hint, HINSTANCE hprev, LPSTR arg, int ncmd)
{
    MessageBox(NULL, "Welcome to Cyber Security World !", "hack_me", MB_OKCANCEL);
    return 0;
}

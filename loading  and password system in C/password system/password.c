#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    const int max_password_length = 15;
    char password[max_password_length + 1];
    char ch;
    int character_position = 0;
    printf("Enter the password . Length 1 - %d\n", max_password_length);

    while (1)
    {
        /* code */
        ch = getch();
        if (ch == 13) // Enter_keyword ASCII code is 13
        {
            /* code */
            break;
        }
        else if (ch == 8) // Backspace_keyword ASCII code is 8
        {
            /* code */
            if (character_position > 0)
            {
                /* code */
                character_position--;
                password[character_position] = '\0';
                printf("\b \b");
            }
        }
        else if (ch == 32 || ch == 9) // Space_keyword ASCII code is 32 and tab_keyword ASCII code is 9
        {
            /* code */
            continue;
        }
        else
        {

            if (character_position < max_password_length)
            {
                /* code */
                password[character_position] = ch;
                character_position++;
                printf("*");
            }
            else
            {
                printf("\n Your Input Exceeds maximum password length of %d . So , Only First %d characters will be considered", max_password_length, max_password_length);
                break;
            }
        }
    }

    password[character_position] = '\0';
    printf("\n");
    if (strlen(password) == 0)
    {
        /* code */
        printf("No password Entered");
    }
    else
    {
        printf("Password is %s", password);
    }

    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
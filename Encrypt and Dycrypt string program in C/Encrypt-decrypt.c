#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
    int X;
    char str[MAX];
    printf("Enter your string : ");
    gets(str);
    printf("\n");
    printf("\n");
    printf("Please chosse following options : \n");
    printf("press 1 = Encrypt your String.\n");
    printf("press 2 = Decrypt your String.\n");
    printf("Enter the option number ?\n");
    scanf("%d", &X);

    switch (X)
    {
    case 1:
        /* code */
        for (int i = 0; (i < MAX && str[i] != '\0'); i++)
        {
            /* code */
            str[i] = str[i] + 3; // ascii code
        }
        printf("\n");
        printf("Encrypted string is = %s .", str);
        break;
    case 2:
        for (int i = 0; (i < MAX && str[i] != '\0'); i++)
        {
            /* code */
            str[i] = str[i] - 3;
        }
        printf("\n");
        printf("Decrypted string is = %s .", str);
        break;

    default:
        break;
    }
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
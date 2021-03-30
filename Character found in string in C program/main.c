#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
    char str[MAX];
    int flag = 0;
    char c;
    printf("Enter the string : ");
    gets(str);
    printf("Enter the character which are you interest to found ?\n ");
    scanf("%c", &c);
    printf("\n");
    printf("+=============================+\n");
    printf("+=============================+\n");
    printf("\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        /* code */
        if (str[i] == c)
        {
            /* code */
            flag = 1;
        }
    }
    if (flag == 1)
    {
        /* code */
        printf("Yes... %c is store in this String .",c);
    }
    else
    {
        printf("No... %c is not store in this String .",c);
    }
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
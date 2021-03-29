#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//This is a program for Sclicing user Input string

#define MAX 100

void sclice(char *str, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        /* code */
        str[i] = str[i + m];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[MAX];
    printf("Enter the Character : ");
    gets(str);
    int first_Index, Last_Index;
    printf("Give me the First_Index and  Last_Index : ");
    scanf("%d %d", &first_Index, &Last_Index);
    printf("\n");
    printf("\n");
    printf("\t+==================================+\n");
    printf("\t+==================================+\n");
    printf("\n");
    printf("\n");
    sclice(str, first_Index, Last_Index);
    printf("This is Scilicing element = %s", str);
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
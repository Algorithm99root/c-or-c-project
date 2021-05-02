#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *s;
    s = (char *)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        /* code */
        if (s[i] == ' ')
        {
            /* code */
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    free(s);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

//Always remember that character is internally represented  as integer only

int main()
{
    char c[] = "GATE2011";
    char *p = c;
    printf("%s", (p + 1) + p[3] - p[1]);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
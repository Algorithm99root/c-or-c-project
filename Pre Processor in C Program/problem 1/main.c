#include <stdio.h>
#include <stdlib.h>

#define ONE 1  // ONE is Macros template and 1 is  Macros Expansions .
#define AND && // AND is Macros template and && is Macros  Expansions .
#define OR ||  // OR is Macros template and || is Macros Expansions .

#define TWO ONE + ONE   //TWO is Macros template and in  this line ,ONE+ONE is now  Macros Expansions .ONE Value is 1.
#define THREE TWO + ONE // THREE is Macros template and TWO+ONE is now macros Expansions .ONE value is 1 and TWO is (ONE+ONE means 2).
#define MESSAGE "Everything will\
   be fine\
   it just matter of time."

int main()
{
    if (1 AND 1)
    {
        /* code */
        printf(MESSAGE);
    }
    printf("\n");
    printf("%d\n", THREE);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
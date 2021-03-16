// What is  Macros ?
// => Macros is a fegment of code which is replace the name of macro to value of macro.

//why is Macro used?
//=> Macro help us to read the code easily . Its create our code more standered. and more readbility.
//=>Thats it. Nothing else.

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 5 // LIMIT is macros template(always it write by capittal letter ) and 5 is Macros Expansions. \
                // (#define LIMIT 5) is total called by macros defination .
#define PI 3.1416
#define PASSWORD "32!@#ashik"
#define DISPLAY printf("Hello World"); // In this Macro definattion ,(;) doesn't include this macro defination. \
                                       // it includes with printf function .

int main()
{
    for (int i = 1; i <= LIMIT; i++)
    {
        /* code */
        printf("%d\n", i);
    }
    printf("\n");
    printf("The value of PI is = %f\n", PI);
    printf("\n");
    printf("\n");
    printf("The password is = %s\n", PASSWORD);
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
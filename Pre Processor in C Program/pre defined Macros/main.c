// This is Pre Defined Macros (DATE,TIME,LINE,STDC,FILE)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The File name is = %s\n", __FILE__);    // A string containing the file name.
    printf("The Line is = %d\n", __LINE__);         // An integer  represnting the current line number .
    printf("The current Date is = %s\n", __DATE__); // A string containing the current date .
    printf("The current Time is = %s\n", __TIME__); // A string containing the Time .
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int addnumber(int a, int b, int c);

int main()
{
    int num1, num2, num3, sum;
    printf("Enter the 3 number for sum :");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("\n");
    printf("\t\t|===========================|\n");
    printf("\t\t|===========================|\n");
    sum = addnumber(num1, num2, num3);
    printf("\t\t\t%d + %d + %d = %d\n", num1, num2, num3, sum);
    system("pause");

    return 0;
}

int addnumber(int a, int b, int c)
{
    int result;
    result = a + b + c;

    return result;
}
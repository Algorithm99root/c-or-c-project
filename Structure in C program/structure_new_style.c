#include <stdio.h>
#include <stdlib.h>

struct // (New style) Structure in C program
{
    char *engine;
    char *CarName;
} car1, car2; // car1,car2 is variable name;

int main()
{
    struct car1;
    car1.engine = "Powerfull engine";
    car1.CarName = "Royalrocee";
    car2.CarName = "BMW";
    car2.engine = "Leck engine";

    printf("%s\n", car1.engine);
    printf("%s\n", car1.CarName);
    printf("\n");
    printf("%s\n", car2.CarName);
    printf("%s\n", car2.engine);
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
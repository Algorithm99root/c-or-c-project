#include <stdio.h>

int main()
{

    float celsius, far;  
    printf("Enter Value of Celsius = ");
    scanf("%f", &celsius);
    far = (celsius * 9/5) + 32;
    printf("-----------------------------\n");
    printf("-----------------------------\n");
    printf("The value of this celsius tempature in Faraenhait is = %f ", far);
    return 0;
}
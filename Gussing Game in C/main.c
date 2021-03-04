#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, Nguesses = 1;
    srand(time(NULL));
    number = rand() % 100 + 1;

    //keep runnuing the loop until the number is gussed
    do
    {
        /* code */
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please....!!!\n");
        }
        else if (guess < number)
        {
            /* code */
            printf("Higher number please..!!!\n");
        }
        else
        {
            /* code */
            printf("You gussed it in %d attempts\n", Nguesses);
        }
        Nguesses++;

    } while (guess != number);

    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int game1, game2, user, result;
    //This part is degine for good looking
    printf("\t\t\t||======================================================||\n");
    printf("\t\t\t||======================================================||\n");
    printf("\t\t\t||                                                      ||\n");
    printf("\t\t\t||GAME          created       By      Ashik             ||\n");
    printf("\t\t\t||                                                      ||\n");
    printf("\t\t\t|| MATH         QUIZE            GAME                   ||\n");
    printf("\t\t\t||                                                      ||\n");
    printf("\t\t\t|| Topic   is     Addition     Between    two     Number||\n");
    printf("\t\t\t||                                                      ||\n");
    printf("\t\t\t||======================================================||\n");
    printf("\t\t\t||======================================================||\n");
    printf("\n");
    printf("\n");
    srand(time(NULL)); //It is use for change the Random number every time

    while (result != user) //It is loop for asking question me again and again until you win the game
    {
        /* code */
        game1 = rand() % 1000; // It is used for creating random number under 0 to 1000
        game2 = rand() % 800;  // It is used for creating random number under 0 to 800
        printf("%d + %d = ?\n", game1, game2);
        result = game1 + game2;
        scanf("%d", &user);
        if (result == user)
        {
            /* code */
            printf("\n");
            printf("\t\t\tCongratulation ....you win the Math Quize.....$$$$$");
        }
        else
        {
            printf("\n");
            printf("\t\t\t You give Wrong Answer..The Correct Answer is (%d)\n", result);
        }
    }

    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
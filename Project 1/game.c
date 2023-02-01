#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess=0;
    srand(time(0));
    number = rand()%100+1;
    // Keep running the loop until the number is guessed

        printf("Guess the number between 1 to 100\n");
    do
    {
        scanf("%d", &guess);
        nguess++;

        if (guess<number)
        {
            printf("Higher number please!\n");
        }
        else if (guess>number)
        {
            printf("Lower number please!\n");
        }
        else
        {
            printf("Congrats you guessed it in %d attempts", nguess);
        }
    } while (guess!=number);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char pc;
    int number;
    srand(time(0));
    number = rand()%100+1;

    if (number<=33)
    {
        pc = 's';
    }
    else if (number>33 && number<=66)
    {
        pc = 'w';
    }
    else
    {
        pc = 'g';
    }
    printf("The character is %c", pc);
    return 0;
}
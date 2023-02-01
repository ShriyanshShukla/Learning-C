#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char rcg(char* ptr);
int SnakeWaterGun(char me, char pc);

int main()
{
    char me, pc;
    rcg(&pc);
    printf("Enter s for snake, w for water and g for gun\n");
    scanf("%c", &me);
    int result = SnakeWaterGun(me, pc);

    printf("You chosen %c and computer chosen %c so: ", me, pc);
    if (result == 1)
    {
        printf("You have won\n");
    }
    else if (result == -1)
    {
        printf("You have lost\n");
    }
    else
    {
        printf("It's a draw\n");
    } 
    return 0;
}

char rcg(char* ptr)
{
    int number;
    srand(time(0));
    number = rand()%100+1;

    if (number<=33)
    {
        *ptr = 's';
        return *ptr;
    }
    else if (number>33 && number<=66)
    {
        *ptr = 'w';
        return *ptr;
    }
    else
    {
        *ptr = 'g';
        return *ptr;
    }
}

int SnakeWaterGun(char me, char pc)
{
    if (pc == 's' && me == 'w')
    {
        return -1;
    }
    else if (pc == 's' && me == 'g')
    {
        return 1;
    }
    if (pc == 'w' && me == 'g')
    {
        return -1;
    }
    else if (pc == 's' && me == 'w')
    {
        return 1;
    }
    if (pc == 'g' && me == 's')
    {
        return -1;
    }
    else if (pc == 'g' && me == 'w')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
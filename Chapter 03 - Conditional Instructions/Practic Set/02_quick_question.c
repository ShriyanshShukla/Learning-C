#include <stdio.h>

int main()
{
    char G;
    printf("What is your grade\n");
    scanf("%c", &G);

    switch (G)
    {
    case 'A':
        printf("Your marks are between 90 to 100");
        break;
    case 'B':
        printf("Your marks are between 80 to 90");
        break;
    case 'C':
        printf("Your marks are between 70 to 80");
        break;
    case 'D':
        printf("Your marks are between 60 to 70");
        break;
    case 'F':
        printf("Your marks are less than 70");
        break;
    }
    return 0;
}
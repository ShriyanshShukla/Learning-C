// Reverse the number

#include <stdio.h>

int main()
{
    int number;
    int ld;
    int reverse = 0;

    printf("Enter the number\n");
    scanf("%d", &number);

    while (number>0)
    {
        ld = number % 10;
        reverse = (reverse*10) + ld;
        number = number / 10;
    }
        printf("%d", reverse);
    return 0;
}
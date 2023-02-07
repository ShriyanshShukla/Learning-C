// Swapping

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a and b is %d and %d\n", a, b);
    return 0;
}
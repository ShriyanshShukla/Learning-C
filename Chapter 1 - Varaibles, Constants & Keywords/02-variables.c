#include <stdio.h>

int main()
{
    int a = 4;
    float b = 3.5;
    char c = 'T';
    printf("The value of a is %d \n", a);
    printf("The value of b is %f %f\n", b, b);
    printf("The value of c is %c \n", c);

    int d = 43;
    int e = 43 + 8;
    printf("Sum of a and d is %d \n", a + d);
    printf("Sum of d and 8 is %d \n", e);
    //OR
    printf("Sum of a, b, e and 32 is %f\n", a + b + e + 32 );
    return 0;
}


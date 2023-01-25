#include <stdio.h>
int sum(int a, int b);

int main()
{
    int x=7, y=4;
    printf("The value a and b is %d and %d\n", x, y);
    printf("The value 4+7 is %d\n", sum(x, y));
    printf("The value of a and b after function call is %d and %d\n", x, y);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 3434;
    b = 4343;
    return c;
}
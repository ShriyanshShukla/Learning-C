#include <stdio.h>
int f(int a);

int main()
{
    int i = 3;

    printf("The value of i is %d\n", i);
    f(i);
    printf("The value of i is %d\n", i);
    return 0;
}

int f(int a)
{
    return 10*a;
}
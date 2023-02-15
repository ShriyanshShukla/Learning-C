#include <stdio.h>
void f(int* x);

int main()
{
    int n = 4;
    printf("The value of n is %d\n", n);
    f(&n);
    printf("The value of n is %d\n", n);
    return 0;
}

void f(int* x)
{
    *x = (*x)*10;
}
#include <stdio.h>
int fib(int n);

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    printf("The %dth number of fibonachi series is %d", n, fib(n));
    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
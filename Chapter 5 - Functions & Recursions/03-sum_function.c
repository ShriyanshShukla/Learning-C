#include <stdio.h>
//Sum is the function which takes a and b as input and returns an integer as an output
int sum(int a, int b);

int main()
{
    int result;
    result = sum(2, 5);
    printf("The value of c is %d\n", result);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
#include <stdio.h>
int average(int a, int b, int c);

int main()
{
    int a, b, c, av;
    printf("Enter the value of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);

    av = average(a, b, c);
    printf("The average of %d, %d and %d is %d", a, b, c, av);
    return 0;
}

int average(int a, int b, int c)
{
    return (a+b+c)/3;
}
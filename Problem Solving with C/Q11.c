// Addition of cubes without using math library

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter the value\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i*i*i;
    }
        printf("The sum of squares till %d natural number is: %d\n", n, sum);
    return 0;
}
// Addition of square series

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter the value\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(i,2);
    }
    printf("The sum of squares till %d natural number is: %d\n", n, sum);
    return 0;
}
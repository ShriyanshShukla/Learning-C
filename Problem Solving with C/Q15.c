// Print 2 arrays and their sum

#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers you wants to input ?\n");
    scanf("%d", &n);

    int a[n], b[n], sum[n];

    printf("Enter the values of 1st array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the values of 2nd array\n");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }

    printf("The sum of 2 arrays is:\n");
    for (int k = 0; k < n; k++)
    {
        sum[k] = a[k] + b[k];
        printf("%d + %d = %d\n", a[k], b[k], sum[k]);
    }
    return 0;
}
// Find the max and min value in array

#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers you wants to input ?\n");
    scanf("%d", &n);

    int a[n];
    int max, min;
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = min = a[0];
    for (int j = 1; j < n; j++)
    {
        if (max<a[j])
        {
            max = a[j];
        }
        if (min>a[j])
        {
            min = a[j];
        }
    }
    printf("The max number is %d and min number is %d\n", max, min);
    return 0;
}
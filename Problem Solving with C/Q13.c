// Program to find the position of number in array

#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers you wants to input ?\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b;
    int pos = 0;
    printf("Enter the number whose position you want\n");
    scanf("%d", &b);

    for (int j = 0; j < n; j++)
    {
        if (a[j]==b)
        {
            pos = j + 1;
        }
    }
    if (pos==0)
    {
        printf("Invaild Number\n");
    }
    else
    {
        printf("The position of %d is %d\n", b, pos);
    }
    return 0;
}
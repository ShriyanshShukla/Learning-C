#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("***Multiplication Table***\n");

    while (i<=10)
    {
        printf("%d X %d = %d\n", n, i, n*i);
        i++;
    }

    for ( i; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
    return 0;
}
// Find the factorial

#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int num = 1;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (; i <= n; i++)
    {
        num *= i;
    }
    
    printf("The factorial of %d is %d:\n", n, num);
    return 0;
}
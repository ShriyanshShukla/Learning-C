#include <stdio.h>

int main()
{
    // Factorial(4) - 4*3*2*1
    // Factorial(6) - 6*5*4*3*2*1

    int i, n, factorial=1;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial value of %d is %d", n, factorial);
    
    return 0;
}
#include <stdio.h>

int main()
{
    int i=1, n, prime=0;
    printf("Enter the number\n");
    scanf("%d", &n);
   
    for (i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            prime++;
        }
        
    }
    if (prime==2)
    {
        printf("This number is a prime number");
    }
    else
    {
        printf("This number is not a prime number");
    }

    return 0;
}
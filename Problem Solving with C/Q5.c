// Prime or Not

#include <stdio.h>

int main()
{
    int n;
    int prime = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
       if (n%i==0)
       {
            prime++;
       } 
    }
    if (prime==1)
    {
        printf("%d is a prime number\n", n);
    } 
    else
    {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}
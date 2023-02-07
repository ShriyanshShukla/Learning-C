// Print Fibonacchi Series

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c;
    int n;

    printf("Enter the value\n");
    scanf("%d", &n);
    printf("%d\t%d", a, b);

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        printf("\t%d", c);
        a = b;
        b = c;
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 1;
//     int n;
//     int fib[100];

//     printf("Enter the value\n");
//     scanf("%d", &n);

//     fib[0] = a;
//     fib[1] = a+b;
//     for (int i = 2; i < n; i++)
//     {
//         fib[i] = fib[i-1] + fib[i-2];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", fib[i]);
//     }
//     return 0;
// }
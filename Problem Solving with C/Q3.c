// Program to print stars in triangle

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2*i-1); k++)
        {
            printf("*");
        }
            printf("\n");
    }
    return 0;
}

// for (int i = 1; i <= n; i++)
//     {
//        for (int j = 1; j <= i; j++)
//        {
//            printf("*");
//        }
//            printf("\n");
//     }

// for (int i = n; i >= 0; i--)
//     {
//        for (int j = 0; j <= i; j++)
//        {
//            printf("*");
//        }
//            printf("\n");
//     }

// for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//             printf("\n");
//     }

// for (int i = n; i >= 0; i--)
//     {
//         for (int j = n; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//             printf("\n");
//     }

// for (int i = n; i >= 0; i--)
// {
//     for (int j = n; j > i; j--)
//     {
//         printf(" ");
//     }
//     for (int k = 1; k <= (2*i-1); k++)
//     {
//         printf("*");
//     }
//         printf("\n");
// }
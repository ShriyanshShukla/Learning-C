// Print a matrix

#include <stdio.h>

int main()
{
    int a, b;
    printf("How many rows and colums you want in the matrix\n");
    scanf("%d %d", &a, &b);

    int m[a][b];
    int* ptr;
    ptr = &m[0][0];

    printf("Enter the numbers\n");
    for (int i = 0; i < (a*b); i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    ptr = &m[0][0];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", *ptr);
            ptr++; 
        }
            printf("\n");
    }
    return 0;
}

// int m[a][b];
// printf("Enter the numbers\n");
// for (int i = 0; i < a; i++)
// {
//     for (int j = 0; j < b; j++)
//     {
//         scanf("%d", &m[i][j]);
//     } 
// }
// for (int i = 0; i < a; i++)
// {
//     for (int j = 0; j < b; j++)
//     {
//         printf("%d\t", m[i][j]);
//     }
//         printf("\n");
// }
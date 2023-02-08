// Print a diagonal elements of the matrix

#include <stdio.h>

int main()
{
    int a, b;
    printf("How many rows and colums you want in the matrix\n");
    scanf("%d %d", &a, &b);

    char m[a][b];
    printf("Enter the numbers\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &m[i][j]);
        } 
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", m[i][j]);
        }
            printf("\n");
    }

    printf("The diagonal numbers are:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i==j)
            {
                printf("%d\t", m[i][j]);
            }
        } 
    }
    return 0;
}
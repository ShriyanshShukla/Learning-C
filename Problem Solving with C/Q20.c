// Multiplication of 2 matrix

#include <stdio.h>

int main()
{
    int a, b;
    printf("How many rows and colums you want in both matrix\n");
    scanf("%d %d", &a, &b);

    int m1[a][b];
    printf("Enter the numbers\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &m1[i][j]);
        } 
    }
    printf("Matrix 1:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", m1[i][j]);
        }
            printf("\n");
    }

    int m2[a][b];
    printf("Enter the numbers\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &m2[i][j]);
        } 
    }
    printf("Matrix 2:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", m2[i][j]);
        }
            printf("\n");
    }

    int m3[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            m3[i][j] = 0;
            for (int k = 0; k < a; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }   
        }
    }
    printf("Multiplication of matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", m3[i][j]);
        }
            printf("\n");
    }
    return 0;
}
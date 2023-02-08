// Addition of 2 matrix

#include <stdio.h>

int main()
{
    int a, b;
    printf("How many rows and colums you want in both matrixs\n");
    scanf("%d %d", &a, &b);

    char m1[a][b];
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

    char m2[a][b];
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

    char m3[a][b];
    printf("Addition of 2 matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
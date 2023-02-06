// Table from 1 to 10

#include <stdio.h>

int main()
{
    int a[10][10];
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            a[i][j] = (i+1)*(j+1);
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
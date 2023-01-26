#include <stdio.h>
// void printTable(int* mul, int num, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         mul[i] = num*(i+1);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d x %d = %d\n", num, i+1, mul[i]);
//     }
//     printf("\n");
// }
//     printTable(mul[0], 2, 10);
//     printTable(mul[1], 7, 10);
//     printTable(mul[2], 9, 10);

int main()
{
    int mul[3][10];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i==0)
            {
                mul[i][j] = 2*(j+1);
                printf("2 x %d = %d\n", j+1, mul[i][j]);
            }
            else if (i==1)
            {
                mul[i][j] = 7*(j+1);
                printf("7 x %d = %d\n", j+1, mul[i][j]);
            }
            else
            {
                mul[i][j] = 9*(j+1);
                printf("9 x %d = %d\n", j+1, mul[i][j]);
            }
        }
    }
    return 0;
}
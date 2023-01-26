#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the number:\n");
    scanf("%d", &a);
    printf("Enter the number of levels you want in this table:\n");
    scanf("%d", &b);

    int mul[1][b];
    for (int i = 0; i < b; i++)
    {
            mul[0][i] = a*(i+1);
            printf("%d x %d = %d\n", a, i+1, mul[0][i]);
    }
    return 0;
}
#include <stdio.h>
void stars(int n);

int main()
{
    int a;
    printf("Enter the number of lines\n");
    scanf("%d", &a);
    stars(a);
    return 0;
}

void stars(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    stars(n-1);
    for (int i = 1; i <= (2*n-1); i++)
    {
        printf("*");
    }
        printf("\n");
}
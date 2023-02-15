#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (int a = 1; a <= n; a++)
    {
        printf("%d\n", a);
    }
    
    return 0;
}
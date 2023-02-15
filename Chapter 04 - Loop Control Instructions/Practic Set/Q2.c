#include <stdio.h>

int main()
{
    int i = 10;

    while (i>0)
    {
        printf("10 X %d = %d\n", i, 10*i);
        i--;
    }
    
    for (int i = 10; i>0; i--)
    {
        printf("10 X %d = %d\n", i, 10*i);
    }
    
    return 0;
}
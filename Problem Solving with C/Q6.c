// Print 1 to 100 prime numbers

#include <stdio.h>

int main()
{
    int one = 1;
    printf("%d\n", one);
    for (int i = 2; i <= 100; i++)
    {
        int num = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i%j==0)
            {
                num++;
            }
        }
        if (num==1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
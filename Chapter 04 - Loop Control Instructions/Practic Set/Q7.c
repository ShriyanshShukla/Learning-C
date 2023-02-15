#include <stdio.h>

int main()
{
    int i = 1, sum=0, x;
    
    while (i<=10)
    {
        x = 8*i;
        sum += x;
        i++;
    }
    printf("The sum of the numbers occuring in the multiplication table of is %d", sum);
    
    return 0;
}
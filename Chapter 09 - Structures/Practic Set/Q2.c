#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
}vec;

vec sumVector(vec v1, vec v2);

int main()
{
    vec v1, v2, sum;
    {
        v1.x = 3;
        v1.y = 9;
        printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
        v2.x = 5;
        v2.y = 6;
        printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
        sum = sumVector(v1, v2);
    };
        printf("The sum of X dim and Y dim is %d and %d\n", sum.x, sum.y);
    return 0;
}

vec sumVector(vec v1, vec v2)
{
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
#include <stdio.h>

struct complex
{
    int x;
    int y;
};


int main()
{
    struct complex num = {3,4};
    printf("The complex numbers are (%d,%d)\n", num.x, num.y);
    return 0;
}
#include <stdio.h>

int main()
{
    int i = 55;
    int* j = &i;

    printf("The address of i is %u\n", j);
    printf("The value of i is %d\n", *j);
    return 0;
}
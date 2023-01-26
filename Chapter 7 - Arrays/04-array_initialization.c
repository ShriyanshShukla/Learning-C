#include <stdio.h>

int main()
{
    int a[] = {34,232,23};
    printf("The value and address of a[0] is %d and %u\n", a[0], &a[0]);
    printf("The value and address of a[1] is %d and %u\n", a[1], &a[1]);
    printf("The value and address of a[2] is %d and %u\n", a[2], &a[2]);

    double b[] = {44.4,55.5,66.6};
    printf("The value and address of b[0] is %f and %u\n", b[0], &b[0]);
    printf("The value and address of b[1] is %f and %u\n", b[1], &b[1]);
    printf("The value and address of b[2] is %f and %u\n", b[2], &b[2]);

    char c[] = {'I','J','K'};
    printf("The value and address of c[0] is %c and %u\n", c[0], &c[0]);
    printf("The value and address of c[1] is %c and %u\n", c[1], &c[1]);
    printf("The value and address of c[2] is %c and %u\n", c[2], &c[2]);
    return 0;
}
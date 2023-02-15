#include <stdio.h>

int main()
{
    int a[3];
    int* ptr[3];

    a[0] = 33;
    ptr[0] = &a[0];
    printf("The value of ptr[0] before addition: %u\n", ptr[0]);
    // ptr[0]++;
    // printf("The value of ptr[0] after additon: %u\n", ptr[0]);

    a[1] = 44;
    ptr[1] = &a[1];
    printf("The value of ptr[1] before subtraction: %u\n", ptr[1]);
    // ptr[1]--;
    // printf("The value of ptr[1] after subtraction: %u\n", ptr[1]);

    a[2] = 55;
    ptr[2] = &a[2];
    printf("The value of ptr[2] is: %u\n", ptr[2]);
    printf("The diffrence between ptr[0] and ptr[2] is: %d\n", ptr[2] - ptr[0]);

    a[3] = 66;
    ptr[3] = &a[3];
    printf("The value of ptr[3] is: %u\n", ptr[3]);
    ptr[0]++;
    printf("After addition ptr[0] and ptr[1] are pointing on the same variable a[1]: %u, %u\n", ptr[0], ptr[1]);
    printf("AND\n");
    ptr[1]--;
    printf("After suntraction in ptr[1] it is pointing on the variable a[0]: %u\n", ptr[1]);
    return 0;
}
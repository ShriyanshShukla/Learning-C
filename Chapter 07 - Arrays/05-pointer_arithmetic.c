#include <stdio.h>

int main()
{
    // int i = 34;
    // int* ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++;      (ptr = ptr + 1)
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);
    // printf("The address of i is %u\n", &i);

    char c = 'T';
    char* ptr = &c;
    printf("The value of ptr is %u\n", ptr);
    ptr++;      
    printf("The value of ptr is %u\n", ptr);
    printf("The address of c is %u\n", &c);
    return 0;
}
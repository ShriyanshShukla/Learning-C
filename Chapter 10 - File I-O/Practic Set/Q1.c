#include <stdio.h>

int main()
{
    int a;

    FILE* ptr;
    ptr = fopen("sample.txt", "r");
    fscanf(ptr, "%d", &a);
    fclose(ptr);
    printf("The value of a is: %d\n", a);
    return 0;
}
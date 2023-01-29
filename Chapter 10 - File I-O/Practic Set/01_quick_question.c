#include <stdio.h>

int main()
{
    int num;
    FILE* ptr;
    ptr = fopen("sample.txt", "r");

    if (ptr == NULL)
    {
        printf("This file does not exist\n");
    }
    else
    {
        printf("This file exist\n");
    }
    return 0;
}
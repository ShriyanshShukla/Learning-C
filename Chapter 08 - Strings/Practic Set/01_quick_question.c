#include <stdio.h>

int main()
{
    char str[] = "Shriyansh";
    char* ptr = str;
    while (*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
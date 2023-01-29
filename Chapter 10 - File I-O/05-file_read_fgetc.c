#include <stdio.h>

int main()
{
    char c;
    FILE* ptr;
    ptr = fopen("fgetc.txt", "r");

    while (c!=EOF)
    {
        c = fgetc(ptr);
        printf("%c", c);
    }
    fclose(ptr);
    return 0;
}
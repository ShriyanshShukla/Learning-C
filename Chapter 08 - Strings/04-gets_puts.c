#include <stdio.h>

int main()
{
    char str[55];
    printf("Enter your name:\n");
    gets(str);
    puts(str);
    // printf("Your name is %s", str);
    return 0;
}
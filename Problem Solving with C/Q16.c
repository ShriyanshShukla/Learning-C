// Program to print string and then print reverse string and it's length

#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int n;
    printf("Enter your name\n");
    scanf("%s", &s);

    printf("%s_", s);

    n = strlen(s);
    for (int i = (n-1); i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    printf("The length of this string is %d\n", n);
    return 0;
}
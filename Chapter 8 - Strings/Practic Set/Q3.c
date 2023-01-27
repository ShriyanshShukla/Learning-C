#include <stdio.h>
int strlen(char* st);

int main()
{
    char st[] = "Shriyansh";
    int len = strlen(st);
    printf("The length of character in st string is: %d", len);
    return 0;
}

int strlen(char* st)
{
    int i = 0;
    while (*st!='\0')
    {
        i++;
        st++;
    }
    return i;
}
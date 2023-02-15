#include <stdio.h>
void present_check(char* s, char c);

int main()
{
    char s[] = "Shriyansh";
    present_check(s, 'i');
    return 0;
}

void present_check(char* s, char c)
{
    char* ptr = s;
    int i = 0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            i++;
        }
        ptr++;
    }
    if (i>0)
    {
        printf("This character is present in this string");
    }
    else
    {
        printf("This character is not present in this string");
    }
}
// Find the length of the string without using strlen

#include <stdio.h>

int main()
{
    int i = 0;
    char s[] = "Shriyansh";
    
    while (s[i]!='\0')
    {
        i++;
    }
    printf("The length of the string is: %d\n", i);
    return 0;
}
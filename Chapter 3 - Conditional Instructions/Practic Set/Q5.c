#include <stdio.h>

int main()
{
//    a-z = 97-122 (ASCII Value)

    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if (ch>=97 && ch<=122)
    {
        printf("It is a lowercase character");
    }
    else
    {
        printf("It is a uppercase character");
    }
    
    return 0;
}
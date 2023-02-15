#include <stdio.h>
void strcpy(char* ptr1, char* ptr2);

int main()
{
    char str1[] = "Shriyansh";
    char str2[] = "Nishu";
    strcpy(str1, str2);
    printf("Now the value in str1 is %s", str1);
    return 0;
}

void strcpy(char* ptr1, char* ptr2)
{
    while (*ptr1!='\0')
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
}
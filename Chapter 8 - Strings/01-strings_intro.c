#include <stdio.h>

int main()
{
    // char str[] = {'S','h','r','i','y','a','n','s','h','\0'};
    char str[] = "Shriyansh";
    char* ptr = str;

    printf("The address of the first character is: %u\n", ptr);
    ptr++;
    printf("The address of the second character is: %u\n", ptr);
    ptr++;
    printf("The address of the third character is: %u\n", ptr);
    ptr++;
    printf("The address of the fourth character is: %u\n", ptr);
    ptr++;
    printf("The address of the five character is: %u\n", ptr);
    return 0;
}
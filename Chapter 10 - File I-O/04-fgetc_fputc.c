#include <stdio.h>

int main()
{
    FILE* ptr;

    // ptr = fopen("fgetc.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // fclose(ptr);

    ptr = fopen("fputc.txt", "w");
    fputc('D', ptr);
    fputc('e', ptr);
    fputc('m', ptr);
    fputc('o', ptr);
    fclose(ptr);
    return 0;
}
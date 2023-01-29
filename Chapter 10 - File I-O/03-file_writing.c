#include <stdio.h>

int main()
{
    int number = 45;

    FILE* fptr;
    fptr = fopen("generated.txt", "w");
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Thanks for using fprintf\n");
    fclose(fptr);
    return 0;
}
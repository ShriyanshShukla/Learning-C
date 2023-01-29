#include <stdio.h>

int main()
{
    int n;

    FILE* ptr;
    ptr = fopen("Q5.txt", "r");
    fscanf(ptr, "%d", &n);

    n = n*2;
    
    ptr = fopen("Q5.txt", "w");
    fprintf(ptr, "%d", n);
    fclose(ptr);
    return 0;
}
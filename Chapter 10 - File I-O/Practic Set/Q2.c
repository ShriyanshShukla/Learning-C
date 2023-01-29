#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    FILE* ptr;
    ptr = fopen("Q2.txt", "w");

    fprintf(ptr, "Multiplication table of %d\n", n);
    for (int i = 1; i <= 10; i++)
    {   
        fprintf(ptr, "%d X %d = %d\n", n, i, n*i);
    }
    fclose(ptr);
    printf("Successfully generated table of %d into Q2.txt file", n);
    return 0;
}
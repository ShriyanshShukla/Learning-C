#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 7;
    int* ptr;
    ptr = (int*) malloc(10 * sizeof(int));

    printf("****Multiplication table of 7 from 1 to 10****\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = n*(i+1);
        printf("%d x %d = %d\n", n, i+1, ptr[i]);
    }
    
    printf("\n");
    printf("****Multiplication table of 7 from 1 to 15****\n");
    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        ptr[i] = n*(i+1);
        printf("%d x %d = %d\n", n, i+1, ptr[i]);
    }
    free(ptr);
    return 0;
}
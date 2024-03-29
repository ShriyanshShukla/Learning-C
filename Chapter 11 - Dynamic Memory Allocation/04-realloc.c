#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    ptr = (int*) malloc(4 * sizeof(int)); 

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of element %d\n", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }  

    // Reallocating memory
    ptr = realloc(ptr, 10*sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of element %d\n", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }  
    free(ptr);
    return 0;
}

# The End

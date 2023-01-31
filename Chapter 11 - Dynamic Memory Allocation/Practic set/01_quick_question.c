#include <stdio.h>
#include <stdlib.h>

int main()
{
    float* ptr;
    ptr = (float*) malloc(6 * sizeof(float));                                         
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of element %d\n", i+1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of element %d is %.3f\n", i, ptr[i]);
    }  
    return 0;
}
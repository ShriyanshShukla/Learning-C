#include <stdio.h>
void printArray(int ptr[], int n);

int main()
{
    int arr[] = {2,5,565,3,6,42,743};
    printArray(arr,7);
    return 0;
}

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
    ptr[2] = 5555;         // The value will be changes in arr array of main as well
}

// void printArray(int* ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i+1, *(ptr+i));
//     }
// }
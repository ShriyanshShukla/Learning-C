#include <stdio.h>

int main()
{
    FILE* ptr;
    ptr = fopen("sample.txt", "r");   // For reading the text file
    ptr = fopen("sample.txt", "rb");  // For reading the binary file
    ptr = fopen("sample.txt", "w");   // For writing the text file
    ptr = fopen("sample.txt", "wb");  // For writing the binary file
    ptr = fopen("sample.txt", "a");   // For appending the file
    return 0;
}
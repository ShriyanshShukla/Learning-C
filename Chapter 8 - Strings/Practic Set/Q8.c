#include <stdio.h>
int occurence(char st[], char c);

int main()
{
    char st[] = "Shriyansh7777";
    int count = occurence(st, '7');
    printf("Occurences = %d", count);
    return 0;
}

int occurence(char st[], char c)
{
    char* ptr = st;
    int count = 0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            count++;
        } 
        ptr++;
    }
    return count;
}
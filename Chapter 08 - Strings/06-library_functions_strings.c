#include <stdio.h>
#include <string.h>

int main()
{
    char* s = "Shriyansh";
    printf("The length of string s is %d\n", strlen(s));

    char* st1 = "Nishu";
    char st2[40];
    // char* st2;             You can also make st2 pointer, If you wants to tansfer its value to another pointer
    // char* st3 = st2;       Like this
    strcpy(st2, st1);
    printf("Now the st2 is %s\n", st2);

    char str1[45] = "Hello";
    char* str2 = "Hey";
    strcat(str1, str2);
    printf("Now the str1 is %s\n", str1);

    char a[55] = "Yes";
    char* b = "NO";
    int val = strcmp(a, b);
    printf("Now the value is %d\n", val);
    b = "no";
    int val2 = strcmp(a, b);
    printf("Now the value is %d\n", val2);
    // Check ASCII values for more details
    return 0;
}
#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee Shriyansh = {100, 100.000, "Shriyansh Shukla"};

    printf("Code is %d\n", Shriyansh.code);
    printf("Salary is %.3f\n", Shriyansh.salary);
    printf("Name is %s\n", Shriyansh.name);
    return 0;
}
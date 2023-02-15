#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    int a = 43;
    float b = 33.55;
    char c = 'g';

    struct employee e1;
    {
        e1.code = 100;
        e1.salary = 300.000;
        // el.name = "Shriyansh";        Won't work
        strcpy(e1.name, "Shriyansh Shukla");
    };

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}
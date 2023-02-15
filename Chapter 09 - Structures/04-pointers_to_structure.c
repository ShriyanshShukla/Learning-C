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
    struct employee e1;
    struct employee* ptr;
    
    ptr = &e1;
    // (*ptr).code = 101;            Or you can also write:
    ptr->code = 101;
    printf("%d\n", (*ptr).code); 

    ptr->salary = 100.000;
    printf("%.3f\n", e1.salary);
    return 0;
}
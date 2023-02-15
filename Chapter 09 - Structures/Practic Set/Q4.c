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
    struct employee* ptr;     // Making a pointer named ptr
    ptr = &e1;                // Giving address to ptr

    // Giving values to e1 using his address
    ptr->code = 100;
    ptr->salary = 100.000;
    strcpy(ptr->name, "Shriyansh Shukla");

    printf("The code of the employee is: %d\n", ptr->code);
    printf("The salary of the employee is: %.3f\n", ptr->salary);
    printf("The name of the employee is: %s\n", ptr->name);
    return 0;
}
#include <stdio.h>
#include <string.h>

// We use typedef to make our custom datatype Or Inshort Nickname

typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

void show(emp emp1);

int main()
{
    // Declaring e1 and ptr
    emp e1;
    emp* ptr;

    // Pointing ptr to e1
    ptr = &e1;
    
    // Setting the member values for e1
    ptr->code = 100;
    ptr->salary = 100.000;
    strcpy(ptr->name, "Shriyansh Shukla");
    show(e1);
    return 0;
}

void show(emp emp1)
{
    printf("The Code of the employee is: %d\n", emp1.code);
    printf("The Salary of the employee is: %.3f\n", emp1.salary);
    printf("The Name of the employee is: %s\n", emp1.name);
}
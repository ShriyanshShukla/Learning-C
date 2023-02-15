#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp);
void show1(struct employee* emp);

int main()
{
    // struct employee e1;
    // {
    //     e1.code = 100;
    //     e1.salary = 100.000;
    //     strcpy(e1.name, "Shriyansh Shukla");
    // };

    struct employee e1 = {100,100.000,"Shriyansh Shukla"};
    show(e1);
    printf("The Code of the employee is: %d\n", e1.code);
    // Value will not change because we are sending copy of the structure values to the function
    show1(&e1);
    printf("The Code of the employee is: %d\n", e1.code);
    // Now the value will be changed because instead of copied values we have sent the address of the structure 
    return 0;
}

void show(struct employee emp)
{
    printf("The Code of the employee is: %d\n", emp.code);
    printf("The Salary of the employee is: %.3f\n", emp.salary);
    printf("The Name of the employee is: %s\n", emp.name);
    emp.code = 101;
}
void show1(struct employee* emp)
{
    printf("The Code of the employee is: %d\n", (*emp).code);
    printf("The Salary of the employee is: %.3f\n", (*emp).salary);
    printf("The Name of the employee is: %s\n", (*emp).name);
    (*emp).code = 101;
}
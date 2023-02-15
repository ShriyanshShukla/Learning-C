#include <stdio.h>
#include <string.h>
struct employee
{
    char name[50];
    int code;
    float salary;
};

int main()
{
    struct employee e1, e2, e3;
    {
        printf("Enter the name, code and salary of first employee\n");
        // gets(e1.name);
        // scanf("%s", e1.name);
        fgets(e1.name, 50, stdin);
        e1.name[strlen(e1.name) - 1] = 0;
        scanf("%d", &e1.code);
        scanf("%f", &e1.salary);
        fflush(stdin);

        printf("Enter the name, code and salary of second employee\n");
        // gets(e2.name);
        // scanf("%s", e2.name);
        fgets(e2.name, 50, stdin);
        e2.name[strlen(e2.name) - 1] = 0;
        scanf("%d", &e2.code);
        scanf("%f", &e2.salary);
        fflush(stdin);

        printf("Enter the name, code and salary of third employee\n");
        // gets(e3.name);
        // scanf("%s", e3.name);
        fgets(e3.name, 50, stdin);
        e3.name[strlen(e3.name) - 1] = 0;
        scanf("%d", &e3.code);
        scanf("%f", &e3.salary);
    };
        printf("The name, code and salary of first employee is:\n %s\n %d\n %.3f\n", e1.name, e1.code, e1.salary);
        printf("The name, code and salary of second employee is:\n %s\n %d\n %.3f\n", e2.name, e2.code, e2.salary);
        printf("The name, code and salary of third employee is:\n %s\n %d\n %.3f\n", e3.name, e3.code, e3.salary);
    return 0;
}

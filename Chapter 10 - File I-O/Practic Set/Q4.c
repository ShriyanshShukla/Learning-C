#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[20];
    float salary;
}emp;

int main()
{
    emp e1, e2;
    {
    printf("Enter the name and salary of first employee:\n");
    fgets(e1.name, sizeof(e1.name), stdin);
    e1.name[strlen(e1.name) - 1] = 0;
    scanf("%f", &e1.salary);
    fflush(stdin);

    printf("Enter the name and salary of secound employee:\n");
    fgets(e2.name, sizeof(e2.name), stdin);
    e2.name[strlen(e2.name) - 1] = 0;
    scanf("%f", &e2.salary);
    fflush(stdin);
    };

    FILE* ptr;
    ptr = fopen("Q4.txt", "w");

    fprintf(ptr, "%s, ", e1.name);
    fprintf(ptr, "%.3f\n", e1.salary);
    fprintf(ptr, "%s, ", e2.name);
    fprintf(ptr, "%.3f\n", e2.salary);
    return 0;
}

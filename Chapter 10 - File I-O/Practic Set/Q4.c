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
    gets(e1.name);
    scanf("%f", &e1.salary);

    printf("Enter the name and salary of secound employee:\n");
    gets(e1.name);
    scanf("%f", &e2.salary);
    };

    // printf("%s", e1.name);
    // printf("%.3f", e1.salary);
    // printf("%s", e2.name);
    // printf("%.3f", e2.salary);

    FILE* ptr;
    ptr = fopen("Q4.txt", "w");

    fprintf(ptr, "%s, ", e1.name);
    fprintf(ptr, "%.3f\n", e1.salary);
    fprintf(ptr, "%s, ", e2.name);
    fprintf(ptr, "%.3f\n", e2.salary);
    return 0;
}
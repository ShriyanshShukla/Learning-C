#include <stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
}comp;

void display(comp cnums, int a);

int main()
{
    int a = 1;
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for number %d:\n", i+1);
        scanf("%d", &cnums[i].real);
        printf("Enter the imaginary value for number %d:\n", i+1);
        scanf("%d", &cnums[i].imaginary);
    }
    for (int i = 0; i < 5; i++, a++)
    {
        display(cnums[i], a);
    }
    return 0;
}

void display(comp cnums, int a)
{
    printf("The real and imaginary value for number %d is: (%d,%d)\n", a, cnums.real, cnums.imaginary);
}
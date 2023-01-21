#include <stdio.h>

int main()
{
    float tax;
    float income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income>=250000 && income<=500000)
    {
        tax = income * 0.05;
    }
    else if (income>500000 && income<=1000000)
    {
        tax = income * 0.20;
    }
    else if (income>1000000)
    {
        tax = income * 0.30;
    }
        printf("Your net income tax to be paid is %f\n", tax);
    return 0;
}
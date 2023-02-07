// Simple Interest and Compound Interest

#include <stdio.h>
#include <math.h>

int main()
{
    int principal, rate, time;

    printf("Enter the principal amount\n");
    scanf("%d", &principal);
    printf("Enter the interest rate\n");
    scanf("%d", &rate);
    printf("Enter the time in years\n");
    scanf("%d", &time);

    float S_I = (principal*rate*time)/100;
    float C_I = principal*pow((1+rate/100),time);

    printf("The simple interest will be: %f\n", S_I);
    printf("The principal interest will be: %f\n", C_I);
    return 0;
}
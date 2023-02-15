#include <stdio.h>
#include <math.h>

int main()
{
    int a = 3;                     // int/float/char can be Operands
    int b = 4;

    // int a = 3, b = 4;
    // int z = a * b;              // Legal
    // int a * b = z ;             // Illegal because '=' is a assignment Operator

    printf("The value of a + b is: %d\n", a + b);     // Arithmetic Operators are +,-,*,/ etc.
    printf("The value of a - b is: %d\n", a - b);     
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);        // Modular Division Operator
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);      // Sign will be same as of Numerator

    // No Operator should assumed to be present
    // printf("The value of 4 * 5 is: %d\n", 4.5);      // WORNG
    // printf("The value of 4 * 5 is: %d\n", (4)(5));   // WORNG
    // printf("The value of 4 * 5 is: %d\n", 4^5);      // WORNG
    printf("The value of 4 to the power 5 is %f\n", pow(4,5));   // RIGHT and must include "#include <math.h>"

    printf("The division of 2 / 5 is; %f\n", 2/5);               // WRONG
    printf("The division of 2 / 5 is; %f\n", 2.0/5);             // RIGHT
    // One should be written in float because answer is a "Floating Point Real Number"                  
    printf("The value of 6 + 5 is; %d\n", 6 + 5);                // int and int = int
    printf("The value of 6 + 5.2 is; %f\n", 6 + 5.2);            // int and float = float
    printf("The value of 6.3 + 5.8 is; %f\n", 6.3 + 5.8);        // float and float = float
    return 0;
}
#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;

    printf("The value of 3*x - 8*y is: %d\n", 3*x - 8*y);
    // The answer is 60 because The following table lists the operator priority in C
    //          Priority    Operators
    //            1st        *,/,%
    //            2nd        +,-
    //            3rd        =
    // Operators of higher priorty are evaluated first in the absence of Parenthesis(Brackets)
    // Example :- If 3*(x-8*y) so the answer will be -204 because () are present

    printf("The value of 8*y / 3*x is: %d\n", 8*y / 3*x);
    // 8*y / 3*x    Will give wrong answer because when operators of equal priorty are present in an expression,
    // 24/3*x       The tie is taken care of by associativity. Example:-
    // 8*x                     x*y / z => (x*y) / z
    // 16                      x/y * z => (x/y) * z    
    //              *,/ follows Left to Right associativity
 
    return 0;
}
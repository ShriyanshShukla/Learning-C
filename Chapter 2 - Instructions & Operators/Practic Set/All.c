#include <stdio.h>

int main()
{
// Q1. Which of the following is Invalid in C ?
    int a; int b = a;
    int v = 3^3;
   // char dt = '21 DEC 2020';
// Answer is: (iii)

// Q2. What data type will 3.0/8-2 return ?
    float d = (3.0/8-2);
    printf("%f\n", d);
// Answer is: float

// Q3. Write a program ti check whether a number is divisible by 97 or not ?
    int num;
    printf("Enter The Number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num%97);

// Q4. Explain step by step evaluation of 3*x/y-z+k where x = 2, y = 3, z = 3, k = 1
    int x=2, y=3, z=3, k=1;
    int ans = (3*x/y-z+k);
    printf("The Answer of this equation is: %d\n", ans);
// The answer is 0 because
// 3*2/3-3+1
// 6/3-3+1
// 2-3+1
// -1+1
// 0

// Q5. 3.0 + 1 will be:
// Integer
// Floating Point Number
// Character
// Answer is: (ii)
    return 0;
}
#include <stdio.h>

int main()
{
    //  int a = 4, b, c;                            //Type Diclaration Instructions           
    //  b = c = a;                                  //Type Diclaration Instructions
    //  printf("The value of a is %d\n", a);
    //  printf("The value of a is %d\n", b);
    //  printf("The value of a is %d\n", c);

    float a = 1.1;
    float b = a + 8.9;
    printf("The value of b is %f\n", b);

    float b = a + 8.9;                     // Error because we are trying to use a before defining it.
    float a = 1.1;                                  
    printf("The value of b is %f\n", b);
    return 0;
}
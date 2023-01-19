#include <stdio.h>

int main()
{
    float celsius = 35.5, far;
    far = (celsius * 9 / 5) + 32;
    printf("The value of this celsius tempreature in Fahrenheit is %f\n", far);

                                         //OR                   

    float Celsius = 34.2;
    printf("The value of this celsius tempareture in Fahrenheit is %f\n", (Celsius * 9 / 5) + 32);

                                         //OR

    float CELSIUS;
    printf("What is the value of celsius?\n");
    scanf("%f", &CELSIUS);

    printf("The value of celsius tempreature in Fahrenheit is %f\n", (CELSIUS * 9 / 5) + 32);
    return 0;
}


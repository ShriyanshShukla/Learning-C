#include <stdio.h>
float convert_tem(float c);

int main()
{
    float c, f;
    printf("Enter the temperature in celcius\n");
    scanf("%f", &c);

    f = convert_tem(c);
    printf("The celcius temperature in fehrenheit is %.2f", f);
    return 0;
}

float convert_tem(float c)
{
   return (c*9/5)+32;
}
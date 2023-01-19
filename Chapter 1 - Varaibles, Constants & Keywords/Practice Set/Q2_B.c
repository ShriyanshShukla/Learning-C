#include <stdio.h>

int main()
{
    int radius;
    float pi;

    printf("What is the radius of circle\n");
    scanf("%d", &radius);

    printf("What is the pi value of circle\n");
    scanf("%f", &pi);

    printf("The area of the circle is %f\n", pi*radius*radius);
    return 0;
}
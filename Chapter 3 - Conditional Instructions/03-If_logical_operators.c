#include <stdio.h>

int main()
{
    int age, VipPass;
    printf("Enter your age\n");
    scanf("%d", &age);

    if ((age<=70 && age>=18) || !(VipPass==1))
    {
        printf("You are above 18 and below 70, you can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }
    
    return 0;
}
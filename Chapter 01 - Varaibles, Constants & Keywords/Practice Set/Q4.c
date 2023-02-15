#include <stdio.h>

int main()
{
    int principal=100, rate=4, years=2;
    int simpleinterest = (principal * rate * years)/100;
    printf("The value of SimpleInterest is %d\n", simpleinterest);
    return 0;
}

/* 
    #include <stdio.h>
    
    int main()
    {
        int principal, rate, years;
        printf("What is the principal amount\n");
        scanf("%d", &principal);

        printf("What is the interest rate\n");
        scanf("%d", &rate);

        printf("What is time duration\n");
        scanf("%d", &years);

        printf("The valur of simple interest is %d\n", (principal*rate*years)/100);
        return 0;
    }
*/
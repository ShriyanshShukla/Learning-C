#include <stdio.h>
#include <string.h>

typedef struct bank_customer
{
    int code;
    char name[20];
    long long int account_number;
    char pan_number[15];
    char IFSC[15];
    char DOB[15];
}bc;

void display(bc num);

int main()
{
    bc num1;
    {
        num1.code = 1;
        strcpy(num1.name, "Shriyansh Shukla");
        num1.account_number = 524875913929;
        strcpy(num1.pan_number, "KJFI4395M");
        strcpy(num1.IFSC, "PYTM0123456");
        strcpy(num1.DOB, "08/11/1998");
    }
    display(num1);
    return 0;
}

void display(bc num)
{
    printf("The code of the customer is: %d\n", num.code);
    printf("The name of the customer is: %s\n", num.name);
    printf("The account number of the customer is: %lld\n", num.account_number);
    printf("The pan number of the customer is: %s\n", num.pan_number);
    printf("The IFSC code of the customer is: %s\n", num.IFSC);
    printf("The DOB of the customer is: %s\n", num.DOB);
}

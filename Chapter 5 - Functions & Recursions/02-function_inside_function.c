#include <stdio.h>
void M();
void A();
void N();

int main()
{
    M();
    return 0;
}

void M()
{
    printf("Good Morning\n");
    A();
}
void A()
{
    printf("Good Afternoon\n");
    N();
}
void N()
{
    printf("Good Night\n");
}
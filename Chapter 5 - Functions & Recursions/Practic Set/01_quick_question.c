#include <stdio.h>
void M();
void A();
void N();

int main()
{
    M();
    A();
    N();
    return 0;
}

void M()
{
    printf("Good Morning\n");
}
void A()
{
    printf("Good Afternoon\n");
}
void N()
{
    printf("Good Night\n");
}
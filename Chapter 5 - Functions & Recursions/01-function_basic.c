#include <stdio.h>
void display();                                           //Function Prototype

void display()
{
    printf("This is the example of functions\n");         //Fuction Definition
}
int main()
{
    int a;
    printf("Initializing display function:-\n");
    display();                                            //Function Call
    return 0;
}
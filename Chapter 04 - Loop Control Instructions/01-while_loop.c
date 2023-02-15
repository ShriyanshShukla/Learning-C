#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    while (a<=10)
//  while (a>=0) ---> This will lead to an infinite loop
    {
        printf("This is loop %d\n", a);
        a++;
    }
    
    return 0;
}

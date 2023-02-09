// There are 3 types of variables
// Global (These are initialized in the top at the program so everyone can access them)
// Local (These are initialized in the main function so only main() can access them)
// Static (These are firstly run by the system)

#include <stdio.h>

int x = 10;                       // Global

void show()
{
    int z = 5;
    z++;
    printf("%d\n", z);
    x++;
    printf("%d\n", x);
}

int runner() 
{ 
    static int count = 0;         // static
    count++;
    return count;
}

int main()
{
    int a = 50;                   // Local
    printf("%d\n", a);
    x++;
    printf("%d\n", x);
    show();
    printf("%d\n", x);
    x = 0;
    printf("%d\n", x);

    printf("%d\n", runner());
    printf("%d\n", runner());
    return 0;
}
// Roman to Ineger

#include <stdio.h>

int romanToInt(char* s);

int main()
{
    char roman[10];
    printf("Enter the roman number\n");
    scanf("%s", roman);
    printf("The value is %d", romanToInt(roman));
    return 0;
}

int romanToInt(char* s)
{
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i]=='M')
        {
            n += 1000; 
        }
        else if (s[i]=='D')
        {
            n += 500;
        }
        else if (s[i]=='C')
        {
            n += 100;
        } 
        else if (s[i]=='L')
        {
            n += 50;
        }
        else if (s[i]=='X')
        {
            n += 10; 
        }
        else if (s[i]=='V')
        {
            n += 5;
        }
        else if (s[i]=='I')
        {
            n += 1;
        }  
        if (s[i]=='I' && s[i+1]=='V' || s[i]=='I' && s[i+1]=='X')
        {
            n -= 2;
        }
        if (s[i]=='X' && s[i+1]=='L' || s[i]=='X' && s[i+1]=='C')
        {
            n -= 20;
        }
        if (s[i]=='C' && s[i+1]=='D' || s[i]=='C' && s[i+1]=='M')
        {
            n -= 200;
        }
    }
    return n;
}

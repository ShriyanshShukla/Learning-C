// Calculator using function

#include <stdio.h>
int calc(int x[], char z[], int n);

int main()
{
    int n;
    printf("How many values you wants to input ?\n");
    scanf("%d", &n);

    int a[n];
    char op[n-1];
    int ans;

    printf("Enter the values with operator\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        scanf("%c", &op[i]);
    }

    ans = calc(a,op,n);
    printf("The answer is: %d\n", ans);
    return 0;
}

int calc(int x[], char z[], int n)
{
    int ans = x[0];
    for (int i = 0; i < n; i++)
    {
        if (z[i]=='+')
        {
            ans += x[i+1];
        }
        if (z[i]=='-')
        {
            ans -= x[i+1];
        }
        if (z[i]=='*')
        {
            ans *= x[i+1];
        }
        if (z[i]=='/')
        {
            ans /= x[i+1];
        }
    }
    return ans;
}
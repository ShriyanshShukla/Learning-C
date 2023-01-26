#include <stdio.h>
int positive_num(int arr[], int n);

int main()
{
    int arr[] = {-10,-7,-5,-3,0,3,5,7,10};
    printf("The number of positive integar in this array is %d", positive_num(arr,9));
    return 0;
}

int positive_num(int arr[], int n)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            num++;
        }
    }
    return num;
}
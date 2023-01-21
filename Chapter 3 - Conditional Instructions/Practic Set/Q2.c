#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Enter Your Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter Your chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter Your maths Marks\n");
    scanf("%d", &maths);
    total = (physics + chemistry + maths)/3;

    if (total<=40 || physics<=33 || chemistry<=33 || maths<=33)
    {
        printf("Your total persentage is %f and you are fail", total);
    }
    else
    {
        printf("Your total persentage is %f and you are pass", total);
    }
    
    return 0;
}
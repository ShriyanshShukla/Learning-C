#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
}date;

void display(date d);
int dateCmp(date d1, date d2);

int main()
{
    int c;
    date d1 = {8,11,2024};
    date d2 = {5,11,2024};
    display(d1);
    display(d2);
    c = dateCmp(d1,d2);
    printf("Date comparion function returns: %d", c);
    return 0;
}

void display(date d)
{
    printf("The date is: %d/%d/%d\n", d.date, d.month, d.year);
}
int dateCmp(date d1, date d2)
{
    if (d1.year>d2.year)
    {
        return 1;
    }
    if (d2.year>d1.year)
    {
        return -1;
    }
    if (d1.month>d2.month)
    {
        return 1;
    }
    if (d2.month>d1.month)
    {
        return -1;
    }
    if (d1.date>d2.date)
    {
        return 1;
    }
    if (d2.date>d1.date)
    {
        return -1;
    }
    return 0;
}    
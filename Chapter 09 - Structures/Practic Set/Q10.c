#include <stdio.h>

typedef struct timestamp
{
    int year;
    int month;
    int date;
    int hours;
    int minutes;
    int seconds;
}ts;

void display(ts t);
void timeCmp(ts t1, ts t2);

int main()
{
    ts t1 = {2024,12,20,17,45,20};
    ts t2 = {2023,11,29,18,55,15};
    display(t1);
    display(t2);

    timeCmp(t1,t2);
    return 0;
}

void display(ts t)
{
    printf("The timestamp is %d/%d/%d %d:%d:%d\n", t.year, t.month, t.date, t.hours, t.minutes, t.seconds);
}
void timeCmp(ts t1, ts t2)
{
    int timestamp1[6] = {t1.year, t1.month, t1.date, t1.hours, t1.minutes, t1.seconds};
    int timestamp2[6] = {t2.year, t2.month, t2.date, t2.hours, t2.minutes, t2.seconds};

    for (int i = 0; i < 6; i++)
    {
        if (timestamp1[i]>timestamp2[i])
        {
            printf("Timestamp 1 is greater than time 2\n");
            break;
        }
        else if (timestamp1[i]<timestamp2[i])
        {
            printf("Timestamp 2 is greater than time 1\n");
            break;
        }
        else if (i==5)
        {
            printf("Both times are equal\n");
        }
    }
}
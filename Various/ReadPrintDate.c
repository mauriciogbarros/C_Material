#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

void readDate(struct date *);
void printDate(struct date);
struct date advanceDay(struct date);

int main(void)
{
    struct date today, tomorrow;
    
    readDate(&today);
    printDate(today);
    tomorrow = advanceDay(today);
    printDate(tomorrow);

    return 0;
}

void readDate(struct date *dt)
{
    scanf("%d %d %d", &dt->year, &dt->month, &dt->day);
}

void printDate(struct date dt)
{
    printf("%02d/%02d/%d\n", dt.month, dt.day, dt.year);
}

struct date advanceDay(struct date dt)
{
    struct date advDate = {0};

    int endOfMonth [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(dt.year % 4 == 0)
        endOfMonth[1] += 1;

    if(dt.month == 12)
    {
        advDate.year = dt.year + 1;
        advDate.month = 1;
        advDate.day = 1;        
    }
    else if(dt.day == endOfMonth[dt.month-1])
    {
        advDate.year = dt.year;
        advDate.month = dt.month + 1;
        advDate.day = 1;
    }
    else
    {
        advDate.year = dt.year;
        advDate.month = dt.month;
        advDate.day = dt.day + 1;
    }

    return advDate;
}
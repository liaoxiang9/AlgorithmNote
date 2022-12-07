#include <cstdio>
int getYear(int date)
{
    return date / 10000;
}

int getMonth(int date)
{
    return (date % 10000) / 100;
}

int getDay(int date)
{
    return date % 10;
}

bool isLeapYear(int year)
{
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int days_no_leap[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int days_leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int date1 = 0;
    int date2 = 0;
    scanf("%d", &date1);
    scanf("%d", &date2);
    if (date1 > date2)
    {
        int temp = date1;
        date1 = date2;
        date2 = temp;
    }
    int result = 1;
    int cur_day, cur_month, cur_year;
    while (date1 < date2)
    {
        cur_day = getDay(date1);
        cur_month = getMonth(date1);
        cur_year = getYear(date1);
        if (isLeapYear(cur_year))
        {
            if (cur_day < days_leap[cur_month - 1])
                date1 += 1;
            else
            {
                if (cur_month < 12)
                {
                    date1 = 10000 * cur_year + 100 * (cur_month + 1) + 1;
                }
                else
                {
                    date1 = 10000 * (cur_year + 1) + 101;
                }
            }
        }
        else
        {
            if (cur_day < days_no_leap[cur_month - 1])
                date1 += 1;
            else
            {
                if (cur_month < 12)
                {
                    date1 = 10000 * cur_year + 100 * (cur_month + 1) + 1;
                }
                else
                {
                    date1 = 10000 * (cur_year + 1) + 101;
                }
            }
        }
        result++;
    }
    printf("%d", result);
}
#include <iostream>
using namespace std;

class Data
{
public:
    Data(int y = 0, int m = 0, int d = 0) : year(y), month(m), day(d) {}
    ~Data();
    friend int operator-(Data const &, Data const &);

public:
    int year;
    int month;
    int day;
};

int daysFrom0(int year, int month, int day)
{
    int sum = 0;
    for (int i = 0; i < year; i++)
    {
        if (i % 4 == 0 || i % 400 == 0 && i % 100 != 0)
        {
            sum += 366;
        }
        else
        {
            sum += 365;
        }
    }
    int daysInMonthNormal[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysInMonthLeap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0 && year % 400 != 0)
    {
        for (int i = 0; i < month; i++)
        {
            sum += daysInMonthLeap[i];
        }
    }
    else
    {
        for (int i = 0; i < month; i++)
        {
            sum += daysInMonthNormal[i];
        }
    }
    sum += day;
    return sum;
}

int operator-(Data const &a, Data const &b)
{
    int adays = daysFrom0(a.year, a.month, a.day);
    int bdays = daysFrom0(b.year, b.month, b.day);
    return adays - bdays;
}

Data::~Data()
{
}

int main()
{
    Data a(2020, 12, 5);
    Data b(1999, 12, 17);
    cout << a - b << endl;
    return 0;
}

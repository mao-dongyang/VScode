//#pragma once
#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    void cintime();
    void couttime();
    Time(int a = 0, int b = 0, int c = 0);
    ~Time();
};

Time::Time(int a, int b, int c)
{
    hour = a;
    minute = b;
    second = c;
}

void Time::cintime()
{
    cout << "Please enter hour,minute,second" << endl;
    cin >> hour >> minute >> second;
}

void Time::couttime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

Time::~Time()
{
}

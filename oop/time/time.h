//#pragma once
#include <iostream>
using namespace std;

class time
{
private:
    int hour;
    int minute;
    int second;

public:
    void cintime();
    void couttime();
    time(int a = 0, int b = 0, int c = 0);
    ~time();
};

time::time(int a, int b, int c)
{
    hour = a;
    minute = b;
    second = c;
}

void time::cintime()
{
    cin >> hour >> minute >> second;
}

void time::couttime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

time::~time()
{
}

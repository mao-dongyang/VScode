#include <iostream>
using namespace std;

class TSample
{
public:
    TSample(int nn) : n(nn){};
    ~TSample();
    int nadd(TSample &);
    int nadd(int);
    void displayTSample();

    int n;
};

#include "TSample.h"

int TSample::nadd(TSample &s)
{
    n = n + s.n;
    return n;
}

int TSample::nadd(int nn)
{
    n = n + nn;
    return n;
}

void TSample::displayTSample()
{
    cout << n << endl;
}

TSample::~TSample()
{
}
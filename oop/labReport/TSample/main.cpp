#include "TSample.h"

int main()
{
    TSample s1(90), s2(20), s3(50), s4(40);
    s1.nadd(s2.nadd(s3.nadd(s4)));
    s1.displayTSample();
    return 0;
}
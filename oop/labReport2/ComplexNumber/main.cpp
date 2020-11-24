#include "Complex.h"

int main()
{
    Complex z1(1, 1), z2(2, 2), res(0, 0);
    res = z1 * z2;
    res.displayComplex();
    res = z1 - z2;
    res.displayComplex();
    res = z1 + z2;
    res.displayComplex();
    res = z1 * z2;
    res.displayComplex();
    return 0;
}
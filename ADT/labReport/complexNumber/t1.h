#include <iostream>
typedef struct complex{
    double real;
    double imag;
} complex;
complex creatComplex();
void addComplex(complex c1, complex c2, complex &result);
void multiplyComplex(complex c1, complex c2, complex &result);
void subtractComplex(complex c1, complex c2, complex &result);
void divisionComplex(complex c1, complex c2, complex &result);
void printComplex(complex result);

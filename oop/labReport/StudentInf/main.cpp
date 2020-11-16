#include "StudentInf.h"

int main()
{
    StudentInf s[5] = {StudentInf(1, 80), StudentInf(2, 99), StudentInf(3, 56), StudentInf(4, 88), StudentInf(5, 67)};
    StudentInf::max(s);
    return 0;
}
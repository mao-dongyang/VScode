#include <iostream>
#include <string>
using namespace std;

class StudentInf
{
public:
    ~StudentInf();
    StudentInf(int n, int g) : number(n), grade(g){};
    static void max(const StudentInf *s);

    int number;
    int grade;
};

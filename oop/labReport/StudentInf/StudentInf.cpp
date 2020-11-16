#include "StudentInf.h"

StudentInf::~StudentInf()
{
    cout << "\n"
         << number << " out";
}

void StudentInf::max(const StudentInf *s)
{
    int maxGrade;
    int maxPlace;
    maxGrade = s[0].grade;
    maxPlace = 0;
    for (int i = 0; i < 5; i++)
    {
        if (maxGrade < s[i].grade)
        {
            maxGrade = s[i].grade;
            maxPlace = i;
        }
    }
    cout << "The max one is " << s[maxPlace].number;
}
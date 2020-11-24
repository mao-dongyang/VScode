#include "StudentClass.h"

class ClassStudent
{
public:
    ClassStudent(string ma, string cl) : majorClass(ma), classNumber(cl){};
    ~ClassStudent();
    friend void displayStudent(ClassStudent);

    string majorClass;
    string classNumber;
    StudentClass stu[10];
};

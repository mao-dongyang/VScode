#include "ClassStudent.h"

int main()
{
    ClassStudent cla("asds", "ghgfhgf");
    for (int i = 0; i < 10; i++)
    {
        cla.stu[i].grade = i;
        cla.stu[i].name = (char)(i + 65);
    }
    displayStudent(cla);
    return 0;
}
#include "ClassStudent.h"

template <typename T>
void swapArray(T arr[], int i, int j)
{
    T temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(double arr[], int index[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flg = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swapArray(arr, j, j + 1);
                swapArray(index, j, j + 1);
                flg++;
            }
        }
        if (flg == 0)
        {
            break;
        }
    }
}

void displayStudent(ClassStudent cla)
{
    int numberPeople = 10;
    double point[numberPeople];
    int index[numberPeople];
    for (int i = 0; i < numberPeople; i++)
    {
        point[i] = cla.stu[i].grade;
    }
    for (int i = 0; i < numberPeople; i++)
    {
        index[i] = i;
    }
    bubbleSort(point, index, numberPeople);
    for (int i = 0; i < 10; i += 9)
    {
        cout << "Grand:" << i + 1 << endl;
        cout << cla.stu[index[i]].name << endl;
        cout << cla.stu[index[i]].grade << endl;
    }
}

ClassStudent::~ClassStudent()
{
}
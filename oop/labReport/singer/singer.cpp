#include "singer.h"

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

singer::singer(/* args */)
{
    cout << "Please enter number" << endl;
    cin >> number;
    cout << "Please enter name" << endl;
    cin >> name;
    cout << "Please enter judge1" << endl;
    cin >> judge[0];
    cout << "Please enter judge2" << endl;
    cin >> judge[1];
    cout << "Please enter judge3" << endl;
    cin >> judge[2];
}

singer::singer(int nu, string nm, int *jd)
{
    number = nu;
    name = nm;
    for (int i = 0; i < 3; i++)
    {
        judge[i] = jd[i];
    }
    numberPeople++;
}

void singer::getPointAverage()
{
    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += judge[i];
    }
    pointAverage = sum / 3;
}

void singer::displaySinger(singer s[])
{
    double point[numberPeople];
    int index[numberPeople];
    for (int i = 0; i < numberPeople; i++)
    {
        point[i] = s[i].pointAverage;
    }
    for (int i = 0; i < numberPeople; i++)
    {
        index[i] = i;
    }
    bubbleSort(point, index, numberPeople);
    cout << "The number of people is " << s[0].numberPeople << endl;
    for (int i = 0; i < numberPeople; i++)
    {
        cout << "Grand:" << i + 1 << endl;
        cout << s[index[i]].name << endl;
        cout << s[index[i]].pointAverage << endl;
    }
}

singer::~singer()
{
    cout << "Bye Bye from " << name << endl;
}
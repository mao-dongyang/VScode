#include <iostream>
#include <string>
using namespace std;

class singer
{
public:
    void getPointAverage();
    static void displaySinger(singer s[]);
    singer();
    singer(int, string, int *);
    ~singer();

private:
    int number;
    string name;
    int judge[3];
    double pointAverage;
    static int numberPeople;
};

int maxArray(double *a, int length)
{
    double max = a[0];
    int maxPlace = 0;
    for (int i = 0; i < length; i++)
    {
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
}

singer::~singer()
{
    cout << "Bye Bye from " << name << endl;
}

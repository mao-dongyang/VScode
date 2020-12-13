#include <iostream>
using namespace std;

class Triangle
{
public:
    Triangle(double l = 0, double w = 0);
    ~Triangle();
    friend Triangle operator+(Triangle const &a, Triangle const &b);
    void displayArea();

public:
    double length;
    double width;
    double area;
};

void Triangle::displayArea()
{
    cout << area << endl;
}

Triangle::Triangle(double l, double w)
{
    width = w;
    length = l;
    area = width * length;
}

Triangle operator+(Triangle &a, Triangle &b)
{
    Triangle res;
    res.area = a.area + b.area;
    return res;
}

Triangle::~Triangle()
{
}

int main()
{
    Triangle a(2, 2);
    Triangle b(1, 1);
    Triangle c = a + b;
    c.displayArea();
    return 0;
}

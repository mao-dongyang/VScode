#include <iostream>
#define PI 3.1415926
using namespace std;

class Circle
{
public:
    Circle(double r) : radius(r) {}
    ~Circle();
    double calculateArea();

public:
    double radius;
};

double Circle::calculateArea()
{
    return PI * radius * radius;
}

Circle::~Circle()
{
}

class Table
{
public:
    Table(double h) : height(h) {}
    ~Table();
    void displayHeight();

public:
    double height;
};

void Table::displayHeight()
{
    cout << height << endl;
}

Table::~Table()
{
}

class RoundTable : public Circle, public Table
{
public:
    RoundTable(double r, double h, string c) : Circle(r), Table(h), color(c) {}
    ~RoundTable();

public:
    string color;
};

RoundTable::~RoundTable()
{
}

int main()
{
    RoundTable dinnerTable(0.5, 1.5, "yellow");
    dinnerTable.displayHeight();
    cout << dinnerTable.calculateArea() << endl;
    return 0;
}

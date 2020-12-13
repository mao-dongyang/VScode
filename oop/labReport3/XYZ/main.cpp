#include <iostream>
using namespace std;

class Int
{
public:
    Int(int n) : number(n){};
    ~Int();
    friend Int operator+(Int const &, Int const &);

public:
    int number;
};

Int operator+(Int const &a, Int const &b)
{
    Int temp(a.number + b.number);
    return temp;
}

Int::~Int() {}

class X : public Int
{
public:
    friend X operator-(Int const &, Int const &);
    X(int n) : Int(n) {}
    ~X() {}
};

class Y : public Int
{
public:
    friend Y operator*(Int const &, Int const &);
    Y(int n) : Int(n) {}
    ~Y() {}
};

class Z : public Int
{
public:
    friend Z operator/(Int const &, Int const &);
    Z(int n) : Int(n) {}
    ~Z() {}
};
Y operator*(Int const &a, Int const &b)
{
    Y temp(a.number * b.number);
    return temp;
}

X operator-(Int const &a, Int const &b)
{
    X temp(a.number - b.number);
    return temp;
}

Z operator/(Int const &a, Int const &b)
{
    Z temp(a.number / b.number);
    return temp;
}

int main()
{
    Y a(4), b(2);
    Y c = a * b;
    cout << c.number << endl;
    return 0;
}

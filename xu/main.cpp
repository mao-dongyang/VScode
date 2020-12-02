#include <iostream>
using namespace std;

double creator(double n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return creator(n - 1) + 1 / n;
    }
}

int main()
{
    double n = 1;
    while (creator(n) < 8)
    {
        n++;
    }
    if (creator(n) - 8 < 8 - creator(n - 1))
    {
        cout << n << endl;
    }
    else
    {
        cout << n - 1 << endl;
    }
    cout << n << "=>" << creator(n) << "\n"
         << n - 1 << "=>"
         << creator(n - 1) << endl;
    return 0;
}
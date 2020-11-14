#include <iostream>
using namespace std;
int Plus(int n)
{
    int sum = 0;
    for (int i = 1; i < n + 1; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << Plus(n) << endl;
    return 0;
}
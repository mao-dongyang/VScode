#include <iostream>
#include <string>
using namespace std;

/*int lenString(string s)
{
    int i = 1;
    while (s[i] != 0)
    {
        i++;
    }
    return i;
}*/

int main()
{
    string s;
    cout << "Please enter string" << endl;
    cin >> s;
    cout << "The length is " << s.length() << endl;
    return 0;
}
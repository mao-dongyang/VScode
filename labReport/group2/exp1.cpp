#include<iostream>

using namespace std;

void starDraw(int number) {
    for (int i = 1; i <= number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}


#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Please enter a number " << endl;
    cin >> number;
    starDraw(number);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Please enter two numbers " << endl;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << "\t" << b << endl;
    return 0;
}
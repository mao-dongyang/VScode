#include<iostream>
using namespace std;

int fibonacciSequence(int n){
    if (n==1)
    {
        return 1;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return fibonacciSequence(n - 1) + fibonacciSequence(n - 2);
    }
}

int main(){
    int n;
    cout << "Please enter n item of Fibonacci" << endl;
    cin >> n;
    cout << fibonacciSequence(n);
    return 0;
}
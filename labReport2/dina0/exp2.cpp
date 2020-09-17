#include<iostream>
using namespace std;

inline float SUM(float a, float b){
    return a + b;
}


int main(){
    float a, b;
    cout << "Please enter two numbers" << endl;
    cin >> a >> b;
    cout << "The sum is " << SUM(a, b) << endl;
    return 0;
}
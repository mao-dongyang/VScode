#include <iostream>
using namespace std;

inline float SUM(float a, float b, float c){
    return a + b + c;
}

int main(){
    float a, b, c;
    cout << "Please enter three numbers" << endl;
    cin >> a >> b >> c;
    cout << "The sum is " << SUM(a, b, c) << endl;
    return 0;
}
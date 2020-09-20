#include <iostream>
using namespace std;

inline float calculate_c(float F){
    return (5.0 / 9) * (F - 32);
}

int main(){
    float F;
    cout << "Enter a Fahrenheit temperature " << endl;
    cin >> F;
    cout << "The temperature in centigrade is " << calculate_c(F) << endl;
    return 0;
}
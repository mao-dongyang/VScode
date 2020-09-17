#include <iostream>
#include <math.h>

using namespace std;

typedef float length, area;

inline float calculate_S(float a, float b, float c){
    return (a + b + c) / 2;
}

inline float calculate_Area(float a, float b, float c, float s){
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(){
    length a, b, c;
    cout << "Please enter the length of three sides of a triangle" << endl;
    cin >> a >> b >> c;
    cout << "The area of the triangle is " << calculate_Area(a, b, c, calculate_S(a,b,c)) << endl;
    return 0;
}
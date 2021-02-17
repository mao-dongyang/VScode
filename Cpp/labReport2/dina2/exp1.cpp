#include <iostream>
#include <string>
//#define Radius 1.5
//#define Height 3
#define PI 3.14
using namespace std;

inline float perimeter(float r){
    return 2 * PI * r;
}

inline float area(float r){
    return PI * r * r;
}

inline float sphereSurfaceArea(float r){
    return 4 * area(r);
}

inline float sphereVolume(float r){
    return sphereSurfaceArea(r) * r / 3;
}

inline float cylinderVolume(float r, float h){
    return area(r) * h;
}

int main(){
    float r, h;
    cout << "Please enter the radius and height" << endl;
    cin >> r >> h;
    cout << "The perimeter is " << perimeter(r) << endl;
    cout << "The area is " << area(r) << endl;
    cout << "The sphereSurfaceArea is " << sphereSurfaceArea(r) << endl;
    cout << "The sphereVolume is " << sphereVolume(r) << endl;
    cout << "The cylinderVolume is " << cylinderVolume(r, h) << endl;
    return 0;
}

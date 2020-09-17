#include<iostream>
#include<math.h>
#define Positive 1
#define Negative -1
#define PI 3.1415926535898
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

double itemCreator(double x, int n){
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return pow(x, 2 * (n-1)) / factorial(n);
    }
}

int sign(int n){
    if (n%2==0)
    {
        return Negative;
    }
    else
    {
        return Positive;
    }
    
}

double inductionFormula(double x){
    for (;x < -PI || x>PI;){
        if (x < -PI)
        {
            x += 2 * PI;
        }
        else if (x>PI)
        {
            x -= 2 * PI;
        }
        else
        {
            break;
        }
        
    }
    return x;
}

double item(double x,int n){
    return sign(n) * itemCreator(x, n) / factorial((n - 1) * 2);
}

double itemSum(double x,int itemNumber){
    double sum = 0;
    for (int n = 1; n <= itemNumber; n++){
        sum += item(x, n);
    }
    return sum;
}

int main(){
    int itemNumber;
    double x;
    cout << "Please enter itemNumber you want" << endl;
    cin >> itemNumber;
    cout << "Please enter x you want" << endl;
    cin >> x;
    cout << "The result is " << itemSum(inductionFormula(x), itemNumber);
    return 0;
}
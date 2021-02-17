#include<iostream>
using namespace std;

void maxInThreeNumber(float a,float b,float c,float &Result){
    if (a>b){
        if(a > c){
            Result = a;
        }else{
            Result = c;
        }
    }else{
        if(b > c){
            Result = b;
        }else{
	    Result = c;
        }
    }
}

int main(){
    float a, b, c, Result;
    float abc;
    cout << "Please enter three numbers" << endl;
    cin >> a >> b >> c;
    maxInThreeNumber(a, b, c, Result);
    cout << "The max number is " << Result;
    return 0;
}

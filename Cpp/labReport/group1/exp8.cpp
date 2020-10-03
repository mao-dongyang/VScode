#include<iostream>
using namespace std;

typedef int Year;

int main(){
    Year year;
    cout << "Please enter a year" << endl;
    cin >> year;
    if((year%4==0&&year%100!=0) || (year%4==0&&year%400==0)){
        cout << "leap year" << endl;
    }else{
        cout << "average year" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

void reverse(int number){
    cout << number % 10;
    number /= 10;
    if(number != 0){
    reverse(number);
    }
}

int main(){
    int number;
    cout << "Please enter a number" << endl;
    cin >> number;
    reverse(number);
    return 0;
}
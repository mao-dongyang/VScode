#include <iostream>
using namespace std;

void int2week(int i){
    char *str[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout << str[i] << endl;
}

int main(){
    int i;
    cout << "Please enter a number" << endl;
    cin >> i;
    int2week(i);
    return 0;
}
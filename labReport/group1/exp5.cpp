#include<iostream>
using namespace std;
int main(){
    char word;
    cout << "Please enter word" << endl;
    cin >> word;
    for (;word>=97 && word <= 122;){
        cout << (char)(word - 32) << "\t" << "Next word" << endl;
        cin >> word;
    }
    return 0;
}